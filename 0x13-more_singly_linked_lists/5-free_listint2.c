#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *l;

	if (head == NULL)
		return;

	while (*head)
	{
		l = (*head)->next;
		free(*head);
		*head = l;
	}

	*head = NULL;
}
