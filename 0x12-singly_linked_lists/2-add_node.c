#include "lists.h"

/**
*add_node - adds a new node at the
*beginning of a list_t list
*
*@head: input
*@str: string
*
*Return: 0
*/
list_t *add_node(list_t **head, const char *str)
{
	int i, num = 0;
	list_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; i[str] != '\0'; i++)
		num++;
	new->len = i;
	new->str = strdup(str);
	new->next = *head;

	*head = new;
	return (new);
}
