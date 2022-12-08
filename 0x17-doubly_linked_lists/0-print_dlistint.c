#include "lists.h"

/**
*print_dlistint - prints all the elements of a dlistint_t list
*@h: ptr to struct
*
*Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t num = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->prev;
		h = h->next;
		num++;
	}
	return (num);
}
