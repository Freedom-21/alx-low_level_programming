#include "main.h"

/**
 * rev_string - print reversed string
 * @s: a string to be reversed
 * Return: 0 for success
 */

void rev_string(char *s)
{
	int first = 0;
	int last = 0;
	char tmp;

	while (s[last] != '\0')
		last++;
	last--;

	while (first < last)
	{
		tmp = s[first];
		s[first] = s[last];
		s[last] = tmp;
		first++;
		last--;
	}
}
