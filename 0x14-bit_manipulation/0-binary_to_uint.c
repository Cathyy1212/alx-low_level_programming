#include "main.h"

/**
 * convert_binary_to_uint - converts a binary number to an unsigned int
 * @binary_str: string containing the binary number
 *
 * Return: the converted number, or 0 if invalid input
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uns_int = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
		return (0);
		uns_int = 2 * uns_int + (*b++ - '0');
	}
	return (uns_int);
}
