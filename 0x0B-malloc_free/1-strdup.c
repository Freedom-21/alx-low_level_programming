#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: the string to be duplicated
 * Return: a pointer
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *dup;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dup = (char *)malloc((len + 1) * sizeof(char));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
