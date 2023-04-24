#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - initiation to c
 * Return: returning 0
 */
int main(void)
{
	int x, y;

	x = 0;
	while (x < 10)
	{
	y = 1;
	while (y < 10)
	{
	if (y <= x)
	{
	y++;
	}
	else
	{
	putchar (x + 48);
	putchar(y + 48);
	if (x + 48 == 56 && y + 48 == 57)
	break;
	else
	{
	putchar(',');
	putchar(' ');
	y++;
	}
	}
	}
	x++;
	}
	putchar('\n');
	return (0);
}
