#include "main.h"

/**
 * get_bit - a function that returns the value of a it at given index
 * @n: an input number
 * @index: an index of the bit we want to get
 * Return: the value of the bit at index or -1 if an error occur
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n & (1UL << index)) != 0);
}
