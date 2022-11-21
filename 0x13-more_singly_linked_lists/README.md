More singly linked lists

data structure for this project:

/**
* struct listint_s - singly linked list
* @n: integer
* @next: points to the next node
*
* Description: singly linked list node structure
* 
*/
typedef struct listint_s
{
	    int n;
	    struct listint_s *next;
} listint_t;

TASKS

Write a function that prints all the elements of a listint_t list.
Write a function that returns the number of elements in a linked listint_t list.
Write a function that adds a new node at the beginning of a listint_t list.
Write a function that adds a new node at the end of a listint_t list.
Write a function that frees a listint_t list.
Write a function that frees a listint_t list.
Write a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
Write a function that returns the nth node of a listint_t linked list.
Write a function that returns the sum of all the data (n) of a listint_t linked list.
Write a function that inserts a new node at a given position.
Write a function that deletes the node at index index of a listint_t linked list.
