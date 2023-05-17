#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
 * _strdup - duplicates a string into a newly allocated memory space
 *
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string, or NULL if allocation fails
 */


char *_strdup(char *str)

{

	char *aaa;

	int i, r = 0;



	if (str == NULL)

		return (NULL);

	i = 0;

	while (str[i] != '\0')

		i++;



	aaa = malloc(sizeof(char) * (i + 1));



	if (aaa == NULL)

		return (NULL);


	for (r = 0; str[r]; r++)

		aaa[r] = str[r];



	return (aaa);

}
