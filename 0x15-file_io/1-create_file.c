#include "main.h"

/**
 * create_file - Creates a file and writes text content
 * @filename: Pointer to the file name
 * @text_content: Pointer to the text content
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int f, e, l = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
	for (l = 0; text_content[l];)
		l++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	e = write(f, text_content, l);

	if (f == -1 || e == -1)
		return (-1);

	close(f);
	return (1);
}
