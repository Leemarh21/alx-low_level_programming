#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: a pointer to address the head of the listint_t list
 *
 * Return: a pointer to the first node of the reveresed list
 */
listint_t *reverse_listint(listint_t **head);
{
	listint_t *p;
	listint_t 8n;

	p = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;
		(*head)->next =p;
		p = *head;
		*head = n;
	}

	*head = p;
	return (*head);
}
