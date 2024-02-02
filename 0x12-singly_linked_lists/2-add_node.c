#include "lists.h"

/**
 * add_node - a function that adds a new node at the beginning of a
 * list_t list.
 * @head: first node of a list list_t
 * @str: input string
 * Return: address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	char *str_dup;
	int len;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);

	str_dup = strdup(str);

	if (str_dup == NULL)
		return (NULL);

	for (len = 0; str[len];)
		len++;

	new_node->str = str_dup;
	new_nodee->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
