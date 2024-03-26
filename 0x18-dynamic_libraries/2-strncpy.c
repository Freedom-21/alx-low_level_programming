#include "main.h"

/**
 * _strncpy - function to copy a string
 * @src: a source string to be copied
 * @dest: a destination variable to have the strings from src
 * @n: number of byte allowed to be copied
 * Return: a pointer to a destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
