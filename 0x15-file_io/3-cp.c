#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *cr_buf(char *f);
void cl_file(int fd);

/**
 * cr_buf - Allocates memory
 * @f: The file
 * Return: != 0
 */
char *cr_buf(char *f)
{
	char *c;

	c = malloc(sizeof(char) * 1024);

	if (c == NULL)
	{
	dprintf(STDERR_FILENO,
	"Error: Can't write to %s\n", f);
	exit(99);
	}
	return (c);
}



/**
 * cl_file - Closes file descriptors
 * @f: The file descriptor
 */
void cl_file(int f)
{
	int c;

	c = close(f);

	if (c == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f);
	exit(100);
	}
}

/**
 * main - The function to copy
 * @argc: The number of arguments
 * @argv: An array of pointers to the arguments
 * Return: 0 or number
 */
int main(int argc, char *argv[])
{
	int file1, file2, r, w;
	char *c;

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}

	c = cr_buf(argv[2]);
	file1 = open(argv[1], O_RDONLY);
	r = read(file1, c, 1024);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
	if (file1 == -1 || r == -1)
	{
	dprintf(STDERR_FILENO,
		"Error: Can't read from file %s\n", argv[1]);
		free(c);
		exit(98);
	}

	w = write(file2, c, r);
	if (file2 == -1 || w == -1)
	{
	dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", argv[2]);
		free(c);
		exit(99);
	}

	r = read(file1, c, 1024);
	file2 = open(argv[2], O_WRONLY | O_APPEND);

	{while (r > 0);

	free(c);
	cl_file(file1);
	cl_file(file2);
	return (0);
}
