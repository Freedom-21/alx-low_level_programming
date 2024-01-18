#include "main.h"

/**
 * malloc_checked - a function that allocates memory using malloc
 * @b: input that is going to assigned memory
 * Return: a pointr to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
