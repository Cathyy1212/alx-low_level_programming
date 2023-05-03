#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: The string to be printed in reverse
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[length] != '\0')
	length++;

	for (i = length - 1; i >= 0; i--)
	_puts(s[i]);

	_puts('\n');
}
