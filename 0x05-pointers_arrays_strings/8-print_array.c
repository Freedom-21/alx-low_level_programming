#include "main.h"

/**
 * print_array - print elements of an array
 * @a: an input array
 * @n: number of elements
 * Return: 0 for success
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
