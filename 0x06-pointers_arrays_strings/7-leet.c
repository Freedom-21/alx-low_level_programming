#include "main.h"

/**
 * leet - function to encode string mozart composed
 * @s: an input string to be encode
 * Return: encoded string
 */

char *leet(char *s)
{
	int i, j;
	char moz[] = {'a', '4', 'A', '4', 'e', '3', 'E', '3', 'o', '0', 'O', '0',
	     't', '7', 'T', '7', 'l', '1', 'L', '1'};


	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; moz[j] != '\0'; (j += 2))
		{
			if (s[i] == moz[j])
				s[i] = moz[j + 1];
		}
	}
	return (s);
}
