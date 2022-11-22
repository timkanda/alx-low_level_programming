#include "lists.h"

/**
*get_nodeint_at_index - a function that returns the nth node
*@head: head
*@index: index
*
*Return: 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ans = 0;

	while (ans < index)
	{
		if (head->next == NULL)
		{
			return (NULL);
		}
		else
		{
			ans++;
			head = head->next;
		}
	}
	return (head);
}
