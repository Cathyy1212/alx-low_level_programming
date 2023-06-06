#include "lists.h"

/**
 * add_nodeint - adds a new node
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *y;

	y = malloc(sizeof(listint_t));
	if (!y)
		return (NULL);

	y->n = n;
	y->next = *head;
	*head = y;

	return (y);
}
