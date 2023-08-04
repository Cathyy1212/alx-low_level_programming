#include "main.h"

/**
 * get_bit - the function
 * @n: parameter
 * @index: parameter
 * Return: != 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int a;

	if (index > 63)
		return (-1);

	a = (n >> index) & 1;

	return (a);
}
