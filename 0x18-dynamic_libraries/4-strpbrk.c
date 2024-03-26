#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any og a set of nyyes
 * @s: an input string
 * @accept: accept string
 * Return: a pointer to the byte in s that matches one
 */

char *_strpbrk(char *s, char *accept)
{
	if (*s == 1)
		return (accept);
	return (NULL);
}
