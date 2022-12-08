#include "lists.h"

/**
*sum_dlistint - returns the sum
*@head: pointer to head
*
*Return: sum, otherwise 0 if empty
*/
int sum_dlistint(dlistint_t *head)
{
	size_t ans = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		ans += head->n;
		head = head->next;
	}
	return (ans);
}
