#include <time.h>
#include <stdio.h>
/**
 * main - initiaion to C
 * Return: returning 0
 */
int main(void)
{
	int x, y;

	x = 0;
	while (x <= 99)
	{
	y = x;
	while (y <= 99)
	{
	if (y != x)
	{
	putchar((x / 10) + 48);
	putchar((x % 10) + 48);
	putchar(' ');
	putchar((y / 10) + 48);
	putchar((y % 10) + 48);
	if (x != 98 || y != 99)
	{
	putchar(',');
	putchar(' ');
	}
	}
	y++;
	}
	x++;
	}
	putchar('\n');
	return (0);
}
