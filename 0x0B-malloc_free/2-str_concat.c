#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: the first string
 * @s2: the second string
 * Return: a ointer to newly allocated memory space or NULL
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int len1 = 0;
	int len2 = 0;

	if (s1 != NULL)
		len1 = strlen(s1);
	if (s1 != NULL)
		len2 = strlen(s2);
	s = malloc((len1 + len2 + 1) * sizeof(char));

	if (s1 != NULL)
		strcpy(s, s1);
	if (s2 != NULL)
		strcpy(s + len1, s2);

	return (s);
}
