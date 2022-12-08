#include "lists.h"

/**
*free_dlistint - frees linked list
*@head: pointer to head
*
*Return: 0
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = NULL;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
