#include "main.h"

/**
 * factorial - a function that returns factorial of a given number
 * @n: input integer number
 * Return: factorial of input number n
 */

int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
