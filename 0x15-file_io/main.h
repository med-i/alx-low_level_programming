#ifndef MAIN_H
#define MAIN_H

#include <fcntl.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>

/**
 * struct os_abi_struct - Structure for holding OS/ABI value-name pairs
 * @value: The byte value representing the OS/ABI in the ELF file
 * @name: The string to print for this OS/ABI
 */
typedef struct os_abi_struct
{
	unsigned char value;
	char *name;
} os_abi_struct;

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif
