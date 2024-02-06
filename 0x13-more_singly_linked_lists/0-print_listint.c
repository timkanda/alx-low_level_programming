#include "lists.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
*print_listint - Entry point
*@h: head
*
*Return: void
*/
size_t print_listint(const listint_t *h)
{
	int ans = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		ans++;
	}
	return (ans);
}
