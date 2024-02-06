#include "lists.h"

/**
 * get_nodeint_at_index - a function that the n-th node of a linked list.
 * @head: a pointer to the linked list
 * @index: index of the node starting at 0
 * Return: n-th node of a linked list or NULL if node doesn't exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);

		head = head->next;
		i++;
	}

	return (NULL);
}
