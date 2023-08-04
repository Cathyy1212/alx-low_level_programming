#include "main.h"

/**
 * clear_bit_at_index - sets the value of a given bit to 0
 * @number: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int k = sizeof(n) * 8;

	if (index > k)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
