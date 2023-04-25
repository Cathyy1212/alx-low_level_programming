#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 * Return: returning 0
 */

void print_alphabet(void)
{
	int f;

	for (f = 97; f <= 122; f++)
	{
		_putchar(f);
	}
	_putchar('\n');
}
