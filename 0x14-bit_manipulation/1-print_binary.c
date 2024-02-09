#include "main.h"

/**
 * print_binary - a function that prints the binary reprsentation of a number
 * @n: an input integer
 * Return: the binary represenation
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		return;
	}

	print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
