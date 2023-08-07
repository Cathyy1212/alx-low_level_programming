#include "main.h"

/**
 * flip_bits - the function
 * @n: parameter
 * @m: parameter
 * Return: != 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, l = 0;
	unsigned long int j;
	unsigned long int k = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		j = k >> i;
		if (j & 1)
			l++;
	}

	return (l);
}
