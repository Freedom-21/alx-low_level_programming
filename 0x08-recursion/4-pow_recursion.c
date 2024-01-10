#include "main.h"

/**
 * _pow_recursion - a function that returns the value of x raised to
 *	the power of y.
 * @x: the base number
 * @y: the number to be a power
 * Return: the value of x raised to the power y.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, (y - 1)));

}
