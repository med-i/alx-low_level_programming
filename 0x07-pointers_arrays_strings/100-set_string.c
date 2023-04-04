#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The string to set.
 * @to: The string to copy.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
