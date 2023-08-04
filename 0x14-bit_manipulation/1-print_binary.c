#include "main.h"

/**
 * print_binary_representation - prints the binary of a decimal
 * @number: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, j = 0;
	unsigned long int a;

	for (i = 63; i >= 0; i--)
	{
		a = n >> i;
		if (a & 1)
		{
			_putchar('1');
			j++;
		}
		else if (j)
		_putchar('0');
	}
	if (!j)
		_putchar('0');
}
