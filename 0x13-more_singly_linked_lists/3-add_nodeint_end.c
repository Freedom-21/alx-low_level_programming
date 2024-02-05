#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end
 * @head: a pointer to the first node
 * @n: an integer to be added
 * Return: address of the new element of NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	listint_t *lastnode = *head;

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (lastnode->next != NULL)
		lastnode = lastnode->next;

	lastnode->next = new;

	return (lastnode);
}
