#include "lists.h"

/**
 * pop_listint - a function that deletes the head node of linked list
 * and returns the heads node's data
 *
 * @head: double pointer to the linked list
 * Return: head nodes data or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *next_node;
	int data;

	if (*head == NULL)
		return (0);

	next_node = (*head)->next;
	data = (*head)->n;

	free(*head);
	*head = next_node;

	return (data);
}
