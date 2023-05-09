#include "main.h"

int is_elf_file(int fd)
{
	char elf_magic_num[] = {0x7F, 'E', 'L', 'F'};
	char file_magic_num[4];
	int i;

	read(fd, file_magic_num, 4);

	for (i = 0; i < 4; i++)
		if (file_magic_num[i] != elf_magic_num[i])
			return (0);

	return (1);
}

void print_magic_number()
{
}

int main(int ac, char **av)
{
	int fd;

	if (ac != 2)
	{
		dprintf(2, "Usage: elf_heade elf_filename\n");
		exit(98);
	}

	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s", av[1]);
		exit(98);
	}

	printf(is_elf_file(fd) ? "Is ELF file\n" : "Is not\n");

	close(fd);
	return (0);
}
