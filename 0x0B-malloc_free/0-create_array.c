#include "main.h"

#include <stdlib.h>

/**
 * create_array - Creates an array of characters.
 *
 * @size: The size of the array to create.
 * @c: The character used for initializing the array.
 *
 * Description:
 * This function dynamically allocates an array of characters of size `size`
 * and initializes each element of the array with the character `c`.
 * If `size` is equal to 0, the function returns NULL.
 * If memory allocation fails, the function also returns NULL.
 *
 * Return:
 * A pointer to the newly allocated array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{

	char *str;

	unsigned int i;



	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)

		return (NULL);



	for (i = 0; i < size; i++)

		str[i] = c;

	return (str);

}
