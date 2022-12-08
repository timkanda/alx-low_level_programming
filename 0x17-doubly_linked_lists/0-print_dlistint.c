#include "lists.h"

/**
*print_dlistint - prints all the elements of a dlistint_t list
*@h: ptr to struct
*
*Return: the number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		print("d\n", h->n);
		h = h->n;
		number++;
	}
	return (number);
}
