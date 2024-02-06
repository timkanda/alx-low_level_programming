#include "lists.h"

/**
*add_nodeint_end - a function that adds a new node at the end
*@head: head
*@n: input int
*
*Return: 0
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *end;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	end = *head;

	while (end->next != NULL)
		end = end->next;
	end->next = new;
	return (new);
}
