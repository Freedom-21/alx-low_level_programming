#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a paramenter
 *	on each element of an array
 * @array: an input array
 * @action: a pointer to the function
 * @size: size of the array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
