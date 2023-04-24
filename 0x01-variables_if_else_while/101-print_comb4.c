#include <time.h>
#include <stdio.h>
/**
 * main - initiation to C
 * Return: returning 0
 */
int main(void)
{
	int x, y, z;

	x = 0;
	while (x < 10)
	{
	y = 1;
	while (y < 10)
	{
	if (x >= y)
	y++;
	else
	{
	z = 2;
	while (z < 10)
	{
	if (z <= b)
	z++;
	else
	{
	putchar(x + 48);
	putchar(y + 48);
	putchar(z + 48);
	if (x + 48 == 55 && y + 48 == 56 && z + 48 == 57)
	break;
	else
	{
	putchar(',');
	putchar(' ');
	}
	z++;
	}
	}
	y++;
	}
	}
	x++;
	}
	putchar('\n');
	return (0);
}
