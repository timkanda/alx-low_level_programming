#include "lists.h"

/**
*listint_len - eturns the number of elements in a linked listint_t list
*@h: head
*
*Return: void
*/
size_t listint_len(const listint_t *h)
{
	int ans = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		ans++;
		h = h->next;
	}
	return (ans);
}
