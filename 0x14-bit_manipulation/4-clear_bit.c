#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: a pointer to input number
 * @index: an index of the bit we want to set
 * Return: 1 if it work or -1 if an error occur
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int m;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	m = ~(1UL << index);
	*n &= m;

	return (1);
}
