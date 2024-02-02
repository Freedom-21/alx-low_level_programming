#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list
 * @h: an input list
 * Return: the number of nodes or
 *	print [0] (nil) if string is NULL
 */

size_t print_list(const list_t *h)
{
	size_t nodes;

	for (nodes = 0; h != 0; nodes++)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
	}

	return (nodes);
}
