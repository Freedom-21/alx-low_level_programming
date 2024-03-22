#include "lists.h"

/**
 * add_dnodeint - a function that adds new node at the beginning
 * @head: pointer to head node
 * @n: new nodes data
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = *head;
	temp->prev = temp;

	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
