#include "lists.h"

/**
*delete_dnodeint_at_index - deletes the node
*@head: double pointer to head
*@index: index of the node
*Return: 1 if it succeeded, -1 if it failed
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int num = 0;
	dlistint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	while (temp->next != NULL)
	{
		if (num == index)
		{
			temp->next->prev = temp->prev;
			temp->prev->next = temp->next;
			free(temp);
			return (1);
		}
		temp = temp->next;
		num++;
	}
	return (-1);
}
