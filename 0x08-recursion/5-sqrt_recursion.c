#include "main.h"

int sqrt_recursive(int n, int guess);

/**
 * _sqrt_recursion - a function that returns the natural
 *	square of root of a number.
 * @n: an input integer number
 * Return: the natural square of root of a number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (0);

	if (n == 1)
		return (1);

	return (sqrt_recursive(n, 2));
}

/**
 * sqrt_recursive - a function to recursively find the square root
 * @n: input integer number
 * @guess: current guess for square root
 * Return: the natural square root of n or -1 if it doesn't have.
 */

int sqrt_recursive(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);
	return (sqrt_recursive(n, guess + 1));
}
