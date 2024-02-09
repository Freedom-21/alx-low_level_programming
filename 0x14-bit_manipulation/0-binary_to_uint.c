#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 * @b: a pointer pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 *	there is one or more chars in the string b that is not 0 or 1
 *	b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0;

	int len = 0;

	if (b == NULL)
	return (0);

	while (b[len] != '\0')
		len++;

	b--;

	while (len > 0)
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (0);
		sum += (b[len] - '0') << (len - 1);
		len--;
	}

	return (sum);
}
