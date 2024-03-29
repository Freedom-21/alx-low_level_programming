#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the data of linked list
 * @head: a pointer to the linked list
 * Return: the sum of all data or 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
