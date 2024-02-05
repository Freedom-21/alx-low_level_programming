#include "lists.h"

/**
 * add_nodeint - a function that adds a new node at the beginning of a list
 * @head: a pointer to the first node of the list
 * @n: an integer value to be add
 * Return: address of the new element or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
