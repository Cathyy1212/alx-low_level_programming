#include "main.h"
/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: string to print
 */
#include <unistd.h>

void _puts(char *str)
{
	while (*str != '\0')
	{
	write(1, str, 1);
	str++;
	}
	write(1, "\n", 1);
}
