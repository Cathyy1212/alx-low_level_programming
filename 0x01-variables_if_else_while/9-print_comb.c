#include <stdio.h>
#include <stdlib.h>
/**
 * main - initiation
 * Return: returning 0
 */
int main(void)
{
	int x = 48;

	while (x < 58)
	{
	putchar(x);
	if (x == 57)
	{
	break;
	}
	putchar(',');
	putchar(' ');
	x++;
	}
	putchar('\n');
	return (0);
}
