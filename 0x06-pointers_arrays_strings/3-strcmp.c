#include "main.h"

/**
 * _strcmp - function to compare two strings
 * @s1: the first string
 * @s2: the second strng
 * Return: the resulting integer
 */

int _strcmp(char *s1, char *s2)
{
	int len1 = 0;
	int len2 = 0;
	int res = 0;

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	if (len1 == len2)
		res = 0;
	if (len1 < len2)
		res = len1 - len2;
	if (len1 > len2)
		res = len1 - len2;
	return (res);
}
