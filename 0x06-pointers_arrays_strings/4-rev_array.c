#include "main.h"

/**
 * reverse_array - function that reverses the content of an array
 * @n: number of elements of the array
 * @a: an array to be reversed
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
