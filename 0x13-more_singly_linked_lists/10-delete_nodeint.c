#include "lists.h"

/**
 * delete_nodeint_at_index - a fucntion that deletes node at specified index
 * @head: a pointer to the linked list
 * @index: the index of the node that should be deleted.
 * Return: 1 if succeeded or -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *current = *head;

	listint_t *prev = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && i < index)
	{
		prev = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	prev->next = current->next;
	free(current);
	return (1);
}
