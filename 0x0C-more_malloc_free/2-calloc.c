#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements of an array
 * @size: size of the array
 * Return: addresses of elements of an array
 *	or NULL if malloc fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int tot_size, i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	tot_size = nmemb * size;
	ptr = malloc(tot_size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < tot_size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
