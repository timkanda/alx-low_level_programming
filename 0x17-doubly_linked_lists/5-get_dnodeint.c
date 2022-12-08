#include "lists.h"

/**
*get_dnodeint_at_index -  returns the nth node
*@head: pointer to head
*@index: node index
*
*Return: the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	size_t number = 0;

	while (head != NULL)
	{
		if (number == index)
			break;
		number++;
		head = head->next;
	}
	return (head);
}
