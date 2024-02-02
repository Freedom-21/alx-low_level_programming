#include "lists.h"

/**
 * list_len - a function that returns the number of elements in
 * a linked list_t list.
 * @h: a list from list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != 0; nodes++)
	{
		h =  h->next;
	}

	return (nodes);
}
