#include "main.h"

/**
 * *_strcpy - function to copy a string
 * @src: a source string to be copied
 * @dest: a destination variable to have the strings from src
 * Return: a pointer to the destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0;
	int i;

	while (src[len] != '\0')
		len++;

	if (len <= n)
	{
		for (i = 0; i < len; i++)
		{
			dest[i] = src[i];
		}
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	dest[len] = '\0';
	return (dest);
}
