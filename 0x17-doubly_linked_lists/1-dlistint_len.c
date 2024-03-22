#include "lists.h"

/**
 * dlistint_len - a function that the len of the list
 * @h: input linked list
 * Return: the length of list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}
	return (num);
}
