#include "main.h"
/**
 * _islower - a function to detect lower letters
 * @c: a letter to be detected
 * Return: 0 for success
 */
int _islower(int c)
{
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
