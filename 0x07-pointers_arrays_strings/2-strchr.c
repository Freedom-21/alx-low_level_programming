#include "main.h"

/**
 * *_strchr - funtion that locates a character in a string.
 * @s: input string
 * @c:input character to be checked the first occurance of it.
 * Return: pointer to the first occurance of the char c in s,
 *	or NULL if char is not found.
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
