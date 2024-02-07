#include "lists.h"

/**
 * delete_nodeint_at_index - a fucntion that deletes node at specified index
 * @head: a pointer to the linked list
 * @index: the index of the node that should be deleted.
 * Return: 1 if succeeded or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *prev = NULL;

	if (current != NULL && current->next == index)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && current->next != index)
	{
		prev = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
}
