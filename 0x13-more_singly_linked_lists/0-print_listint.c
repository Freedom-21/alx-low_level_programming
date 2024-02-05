#include "lists.h"

/**
 * print_listint - a fucntion that prints all the elements of a list
 * @h: a pointer to the linked list
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_of_nodes;

	for (num_of_nodes = 0; h != NULL; num_of_nodes++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (num_of_nodes);
}
