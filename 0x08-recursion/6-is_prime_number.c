#include "main.h"

int is_prime_recursive(int n, int div);

/**
 * is_prime_number - a function that identifies is a number is prime or not
 * @n: input number to be checked if its prime.
 * Return: 0 if it's not prime or 1 if it's prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, n - 1));
}

/**
 * is_prime_recursive - helper function to recursively check for prime
 * @n: input to be checked
 * @div: current divisor being checked
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_recursive(int n, int div)
{
	if (div == 1)
		return (1);

	if (n % div == 0)
		return (0);

	return (is_prime_recursive(n, div - 1));
}
