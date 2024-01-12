#include "main.h"

/**
 * _memcpy - function that copies n bytes from memory area src to
 *	memory area
 * @src: source string
 * @dest: destination string
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
