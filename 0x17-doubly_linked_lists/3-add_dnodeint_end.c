#include "lists.h"

/**
 * add_dnodeint_end - a function that adds a new node at the end
 * @head: pointer to head node
 * @n: new nodes data
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *tp = *head;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	while (tp->next != NULL)
		tp = tp->next;

	tp->next = temp;
	temp->prev = tp;

	return (temp);
}
