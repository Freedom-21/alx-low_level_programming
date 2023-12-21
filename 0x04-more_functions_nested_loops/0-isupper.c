#include "main.h"

/**
 * _isupper - a function that identify uppercase
 * @c: a character to be identified
 * Return: 0 for success
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
		return (1);
	return (0);
}
