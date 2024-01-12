#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: a string to be append
 * @src: a string to be concatenate with dest
 * @n: number of bytes
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int len = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	while (src[len] != '\0')
		len++;

	if (len <= n)
	{
		for (j = 0; src[j] != '\0'; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			dest[i] = src[j];
			i++;
		}
	}

	return (dest);
}
