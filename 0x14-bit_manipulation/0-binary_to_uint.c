#include "main.h"

/**
 * binary_to_uint – to convert a binary number to an unsigned int
 * @b: paramete pointer
 * Return: != 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int j = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		j = 2 * j + (b[i] - '0');
	}

	return (j);
}
