#include "main.h"

/**
 * _memset - a function that fills the first n bytes
 *	 of the memory with a constant byte b
 * @s:input string
 * @b:constant byte to fill the first n bytes of input string s
 * @n:number of first n bytes to be filled with b
 * Return: a pointer to the memory area
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
