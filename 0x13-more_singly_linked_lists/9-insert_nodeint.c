#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *a;
	listint_t *m = *head;

	a = malloc(sizeof(listint_t));
	if (!a || !head)
		return (NULL);

	a->n = n;
	a->next = NULL;

	if (idx == 0)
	{
		a->next = *head;
		*head = a;
		return (a);
	}

	for (i = 0; m && i < idx; i++)
	{
		if (i == idx - 1)
		{
			a->next = m->next;
			m->next = a;
			return (a);
		}
		else
			m = m->next;
	}

	return (NULL);
}
