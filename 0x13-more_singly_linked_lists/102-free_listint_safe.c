#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *a);
size_t print_listint_safe(const listint_t *b);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @a: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *a)
{
	const listint_t *b, *c;
	size_t nodes = 1;

	if (a == NULL || a->next == NULL)
		return (0);

	b = a->next;
	c = (a->next)->next;

	while (c)
	{
		if (b == c)
		{
			b = a;
			while (b != c)
			{
				nodes++;
				b = b->next;
				c = c->next;
			}

			b = b->next;
			while (b != c)
			{
				nodes++;
				b = b->next;
			}

			return (nodes);
		}

		b = b->next;
		c = (c->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @b: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *b)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(b);

	if (nodes == 0)
	{
		for (; b != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)b, b->n);
			b = b->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)b, b->n);
			b = b->next;
		}

		printf("-> [%p] %d\n", (void *)b, b->n);
	}

	return (nodes);
}
