#include "main.h"

/**
 * create_file - Creates a file.
 * @file_name: A pointer to the name of the file to create.
 * @content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *file_name, char *content)
{
	int fd, w, len = 0;

	if (file_name == NULL)
		return (-1);

	if (content != NULL)
	{
		for (len = 0; content[len];)
			len++;
	}

	fd = open(file_name, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
