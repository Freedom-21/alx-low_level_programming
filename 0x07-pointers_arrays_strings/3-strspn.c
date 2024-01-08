#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: input string
 * @accept: input string to be matched
 * Retrun: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c = 0;

	int i,j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				break;
			}
		}

		if (accept [j] == '\0')
			break;
	}
	return (c);
}
