#include "lists.h"

/**
*pop_listint - a function that deletes the head node
*@head: head
*
*Return: 0
*/
int pop_listint(listint_t **head)
{
	int head_n_data;

	listint_t *new;

	if (*head == NULL)
		return (0);

	head_n_data = (*head)->n;

	new = *head;
	*head = (*head)->next;

	free(new);
	return (head_n_data);
}
