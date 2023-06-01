#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of elements in h
 */

typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
size_t list_len(const list_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
	count++;
	head = head->next;
	}

	return (count);
}
