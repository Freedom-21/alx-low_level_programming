#include "main.h"

/**
 * swap_int - function to swap two integers
 * @a: pointer to first iteger
 * @b: pointer to second integer
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
