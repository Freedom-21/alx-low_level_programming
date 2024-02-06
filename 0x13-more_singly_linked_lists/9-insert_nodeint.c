#include "lists.h"

/**
 * insert_nodeint_at_index - a function inserts a new node at a given position.
 * @head: a pointer to the linked list
 * @idx: index of the list where new node should be added.
 * @n: data of new node to be inserted
 * Return: address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;

	listint_t *current = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	while (current != NULL && i < (idx - 1))
	{
		current = current->next;
		i++;
	}

	if (current == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = current->next;
	current->next = new;

	return (new);
}
