#include "3-calc.h"

/**
 * op_add - function that add two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that add two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: differnce of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that add two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: multiple of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that add two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: division of a and b
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function that add two numbers
 * @a: the first integer
 * @b: the second integer
 * Return: modulo of a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Error\n");
		exit(100);
	}

	return (a % b);
}
