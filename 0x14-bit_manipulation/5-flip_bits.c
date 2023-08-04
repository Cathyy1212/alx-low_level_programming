#include "main.h"

/**
 * calculate_flipped_bits - calculates the number of bits to change
 *                          to get from one number to another
 * @number1: first number
 * @number2: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, j = 0;
	unsigned long int a;
	unsigned long int b = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		a = b >> i;
		if (a & 1)
			j++;
	}
	return (j);
}
