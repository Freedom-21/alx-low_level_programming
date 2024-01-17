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
	int i = 0;
	int j;

	while (s1 != NULL && s1[i] != '\0')
	{
		len1++;
		i++;
	}
	i = 0;
	while (s2 != NULL && s2[i] != '\0')
	{
		len2++;
		i++;
	}
	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (s1 != NULL && s1[i] != '\0')
	{
		s[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 != NULL && s2[j] != '\0')
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';

	return (s);
}
