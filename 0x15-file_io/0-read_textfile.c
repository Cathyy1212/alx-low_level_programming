#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT
 * @filename: text to read
 * @letters: number of letters
 * Return: number of bytes read or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t a;
	ssize_t b;
	ssize_t d;

	a = open(filename, O_RDONLY);
	if (a == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	d = read(a, c, letters);
	b = write(STDOUT_FILENO, c, d);

	free(c);
	close(a);
	return (b);
}
