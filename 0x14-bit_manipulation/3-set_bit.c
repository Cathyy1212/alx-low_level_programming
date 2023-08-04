#include "main.h"

/**
 * set_bit_at_index - sets a bit at a given index to 1
 * @number: pointer to the number to change
 * @index: index of the bit to set to 1
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = sizeof(n) * 8;

	if (index > k)
		return (-1);

	*n = ((1L << index) | *n);
	return (1);
}
