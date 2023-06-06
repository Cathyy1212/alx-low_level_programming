#include "lists.h"

/**
 * pop_listint - function
 * @head: pointer
 * Return: different than 0
 */
int pop_listint(listint_t **head)
{
        listint_t *a;
        int b;

        if (!head || !*head)
                return (0);

        b = (*head)->n;
        a = (*head)->next;
        free(*head);
        *head = a;

        return (b);
}
