#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at given index
 * @n: an input number
 * @index: an index of the bit we want to set
 * Return: 1 if it work or -1 if an error occur
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	 *n |= (1UL << index);

	return (1);
}
