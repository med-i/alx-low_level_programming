#include "main.h"

/**
 * print_magic - prints magic bytes of ELF header
 * @magic: pointer to the magic bytes
 * Return: void
 */
void print_magic(char *magic)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < 16; i++)
	{
		printf("%.2x", (unsigned int)magic[i]);
		if (i != 15)
			printf(" ");
	}

	printf("\n");
}

/**
 * print_class - prints the class
 * @class: pointer to the class bytes
 */
void print_class(char *class)
{
	printf("  Class:                             ");
	printf("%s\n", class[0] == 1 ? "ELF32" : "ELF64");
}

/**
 * print_data - Prints the data encoding of the ELF file.
 * @data: Pointer to the data encoding byte.
 */
void print_data(char *data)
{
	printf("  Data:                              ");
	printf("%s\n", data[0] == 1 ? "2's complement, little endian"
				    : "2's complement, big endian");
}

/**
 * print_version - Prints the version of the ELF file.
 * @version: Pointer to the version byte.
 */
void print_version(char *version)
{
	printf("  Version:                           %d (current)\n", version[0]);
}

/**
 * print_os_abi - Prints the OS/ABI of the ELF file
 * @os_abi: Pointer to the OS/ABI byte
 */
void print_os_abi(unsigned char os_abi)
{
	os_abi_struct os_abis[] = {
	    {0x00, "UNIX - System V"},
	    {0x01, "UNIX - HP-UX"},
	    {0x02, "UNIX - NetBSD"},
	    {0x03, "UNIX - Linux"},
	    {0x06, "UNIX - Solaris"},
	    {0x07, "UNIX - AIX"},
	    {0x08, "UNIX - IRIX"},
	    {0x09, "UNIX - FreeBSD"},
	    {0x0C, "UNIX - OpenBSD"},
	    {0x0D, "UNIX - OpenVMS"},
	    {0x0E, "UNIX - NonStop Kernel"},
	    {0x0F, "UNIX - AROS"},
	    {0x10, "UNIX - Fenix OS"},
	    {0x11, "UNIX - CloudABI"},
	};

	int is_known = 0;
	size_t i;

	for (i = 0; i < sizeof(os_abis) / sizeof(os_abi_struct); ++i)
	{
		if (os_abis[i].value == os_abi)
		{
			printf("  OS/ABI:                            %s\n", os_abis[i].name);
			is_known = 1;
			break;
		}
	}

	if (!is_known)
	{
		printf("  OS/ABI:                            <unknown: %02x>\n", os_abi);
	}
}

/**
 * print_abi_version - Prints the ABI version of the ELF file.
 * @abi_version: Pointer to the ABI version byte.
 */
void print_abi_version(char *abi_version)
{
	printf("  ABI Version:                       %d\n", abi_version[0]);
}

/**
 * print_type - Prints the type of the ELF file.
 * @type: Pointer to the type bytes.
 * @data: Pointer to the data encoding byte.
 */
void print_type(char *type, char *data)
{
	uint16_t t;

	if (data[0] == 1)
		t = le16toh(*(uint16_t *)type);
	else if (data[0] == 2)
		t = be16toh(*(uint16_t *)type);
	else
	{
		printf("  Type:                              Unknown\n");
		return;
	}

	printf("  Type:                              ");
	switch (t)
	{
	case 0:
		printf("NONE (No file type)\n");
		break;
	case 1:
		printf("REL (Relocatable file)\n");
		break;
	case 2:
		printf("EXEC (Executable file)\n");
		break;
	case 3:
		printf("DYN (Shared object file)\n");
		break;
	default:
		printf("Other\n");
		break;
	}
}

/**
 * print_entry_point_address - Prints the entry point address of the ELF file.
 * @entry_pnt_add: Pointer to the entry point address bytes.
 * @class: Pointer to the class bytes.
 * @data: Pointer to the data encoding byte.
 */
void print_entry_point_address(char *entry_pnt_add, char *class, char *data)
{
	if (class[0] == 1)
	{
		uint32_t entry;

		if (data[0] == 1)
			entry = le32toh(*(uint32_t *)entry_pnt_add);
		else if (data[0] == 2)
			entry = be32toh(*(uint32_t *)entry_pnt_add);
		else
		{
			printf("  Entry point address:               Unknown\n");
			return;
		}

		printf("  Entry point address:               0x%" PRIx32 "\n", entry);
	}
	else if (class[0] == 2)
	{
		uint64_t entry;

		if (data[0] == 1)
			entry = le64toh(*(uint64_t *)entry_pnt_add);
		else if (data[0] == 2)
			entry = be64toh(*(uint64_t *)entry_pnt_add);
		else
		{
			printf("  Entry point address:               Unknown\n");
			return;
		}

		printf("  Entry point address:               0x%" PRIx64 "\n", entry);
	}
}

/**
 * is_elf_file - Checks if a file is an ELF file by comparing magic numbers.
 * @elf: Pointer to the potential ELF magic numbers.
 * Return: 1 if ELF file, 0 otherwise.
 */
int is_elf_file(char *elf)
{
	char elf_magic_num[] = {0x7F, 'E', 'L', 'F'};

	return (memcmp(elf, elf_magic_num, sizeof(elf_magic_num)) == 0);
}

/**
 * read_bytes - Reads bytes from a file descriptor into a buffer.
 * @fd: File descriptor to read from.
 * @start: Start byte to read from.
 * @end: End byte to read from (inclusive).
 * Return: Pointer to the buffer.
 */
char *read_bytes(int fd, int start, int end)
{
	int size = end - start + 1;
	char *bytes = malloc(size * sizeof(char));

	if (!bytes)
	{
		dprintf(2, "Memory allocation failure\n");
		exit(98);
	}

	memset(bytes, 0, size);

	if ((lseek(fd, start, SEEK_SET)) == -1 || (read(fd, bytes, size - 1)) == -1)
	{
		free(bytes);
		exit(98);
	}

	return (bytes);
}

/**
 * read_and_print - Reads bytes from a file descriptor into a buffer and then
 *                  prints them using a given print function.
 * @fd: File descriptor to read from.
 * Return: None.
 */
void read_and_print(int fd)
{
	char *magic = read_bytes(fd, 0, 16);
	char *class = read_bytes(fd, 4, 5);
	char *data = read_bytes(fd, 5, 6);
	char *version = read_bytes(fd, 6, 7);
	char *os_abi = read_bytes(fd, 7, 8);
	char *abi_version = read_bytes(fd, 8, 9);
	char *type = read_bytes(fd, 16, 18);
	char *entry_point_address = read_bytes(fd, 24, 32);

	printf("ELF Header:\n");
	print_magic(magic);
	print_class(class);
	print_data(data);
	print_version(version);
	print_os_abi((unsigned char)*os_abi);
	print_abi_version(abi_version);
	print_type(type, data);
	print_entry_point_address(entry_point_address, class, data);

	free(magic);
	free(class);
	free(data);
	free(version);
	free(os_abi);
	free(abi_version);
	free(type);
	free(entry_point_address);
}

/**
 * main - Entry point. Opens ELF file and prints its header.
 * @ac: Argument count.
 * @av: Argument vector.
 * Return: 0 on success, error code otherwise.
 */
int main(int ac, char **av)
{
	int fd;
	char *elf;

	if (ac != 2)
	{
		dprintf(2, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	elf = read_bytes(fd, 0, 4);
	if (!is_elf_file(elf))
	{
		dprintf(2, "Error: Not an ELF file\n");
		free(elf);
		close(fd);
		exit(98);
	}

	free(elf);
	read_and_print(fd);

	close(fd);
	return (0);
}
