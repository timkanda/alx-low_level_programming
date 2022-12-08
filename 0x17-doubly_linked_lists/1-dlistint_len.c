#include "lists.h"

/**
*dlistint_len - returns the number of elements
*@h: head of node
*
*Return: number of lements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		h = h->next;
		num++;
	}
	return (num);
}
