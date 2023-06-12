#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @file_name: A pointer to the name of the file.
 * @content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist or the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *file_name, char *content)
{
	int fd, w, len = 0;

	if (file_name == NULL)
		return (-1);

	if (content != NULL)
	{
		for (len = 0; content[len];)
			len++;
	}

	fd = open(file_name, O_WRONLY | O_APPEND);
	w = write(fd, content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
