#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @a: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **a)
{
	listint_t *b = NULL;
	listint_t *c = NULL;

	while (*a)
	{
		c = (*a)->next;
		(*a)->next = b;
		b = *a;
		*a = c;
	}

	*a = b;

	return (*a);
}
