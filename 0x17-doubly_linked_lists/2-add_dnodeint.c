#include "lists.h"

/**
*add_dnodeint - adds a new node
*@head: head ptr
*@n: constant int
*
*Return: address of the new element
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = NULL, *new_node = NULL;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	temp = *head;
	*head = new_node;
	new_node->next = temp;

	if (temp != NULL)
		temp->prev = *head;
	return (new_node);
}

