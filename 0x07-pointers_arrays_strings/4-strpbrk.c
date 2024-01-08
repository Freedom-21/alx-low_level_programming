#include "main.h"

/**
 * _strpbrk - a function that searches a string for any og a set of nyyes
 * @s: an input string
 * @accept: accept string
 * Return: a pointer to the byte in s that matches one
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
