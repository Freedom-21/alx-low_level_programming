#include "lists.h"

/**
 * add_node_end - a function that adds a new node at the beginning of a
 * list_t list.
 * @head: first node of a list list_t
 * @str: input string
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *str_dup;
	int len;
	list_t *end_node, *temp;

	end_node = malloc(sizeof(list_t));

	if (end_node == NULL)
		return (NULL);

	str_dup = strdup(str);

	if (str_dup == NULL)
	{
		free(end_node);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	end_node->str = str_dup;
	end_node->len = len;
	end_node->next = NULL;

	if (*head == NULL)
		*head = end_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}

		temp->next = end_node;
	}

	return (end_node);
}
