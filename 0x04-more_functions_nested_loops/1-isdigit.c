#include "main.h"

/**
 * _isdigit - checks if the input is digit b/n 0-9
 * @c: the input to be checked
 * Return: 0 for success
 */
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
		return (1);
	return (0);
}
