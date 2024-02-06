#include "lists.h"

/**
 * free_listint -  a function that free a list
 * @head: a pointer to a linked list (fist node)
 * Return: 0 for success
 */

void free_listint(listint_t *head)
{
	listint_t *current, *next_node;

	current = head;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
