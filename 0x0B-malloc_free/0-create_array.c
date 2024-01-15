#include "main.h"

/**
 * create_array - a funtion to creat an array of chars and
 *	initializes int with a specific char
 * @size: size of an array
 * @c: characters in the array
 * Return: a pointer to the array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int i;

	if (size == 0)
		return (NULL);

	a = malloc(size * sizeof(char));

	if (a == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
