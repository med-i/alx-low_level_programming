#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int num = 1234;
	int *ptr = &num;
	char *byte_ptr = (char *)ptr;

	return (byte_ptr[0] == 0 ? 0 : 1);
}
