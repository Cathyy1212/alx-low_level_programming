#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @a: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *a)
{
	listint_t *b = a;
	listint_t *c = a;

	if (!a)
		return (NULL);

	while (b && c && c->next)
	{
		c = c->next->next;
		b = b->next;
		if (c == b)
		{
			b = a;
			while (b != c)
			{
				b = b->next;
				c = c->next;
			}
			return (c);
		}
	}

	return (NULL);
}
