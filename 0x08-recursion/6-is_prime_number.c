#include "main.h"

/**
 * is_prime_number - a function that identifies is a number is prime or not
 * @n: input number to be checked if its prime.
 * Return: 0 if it's not prime or 1 if it's prime.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % is_prime_number(n-1) == 0)
		return (0);
	else
		return (1);
}
