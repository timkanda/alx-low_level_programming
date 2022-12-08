#include "lists.h"

/**
*insert_dnodeint_at_index - inserts a new node
*@h: double pointer
*@idx: unsigned node data
*@n: node data
*Return: address of the new node, or NULL if it failed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int num = 1;
	dlistint_t *temp = NULL, *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	temp = *h;
	if (idx == 0)
	{
		*h = new;
		new->next = temp;
		new->prev = NULL;
		temp->prev = new;
		return (new);
	}
	while (temp->next != NULL)
	{
		if (num == idx)
		{
			new->prev = temp;
			new->next = temp->next;
			temp->next = new;
			new->next->prev = new;
		}
		temp = temp->next;
		num++;
	}
	if (num == idx)
	{
		new->prev = temp;
		new->next = NULL;
		temp->next = new;
	}
	if (num < idx)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
