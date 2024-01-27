#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: numbers or do not return if separator is NULL
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n > 0)
	{
		va_start(args, n);

		i = 0;

		while (i < n)
		{
			printf("%d", va_arg(args, int));

			if ((i != (n - 1)) && (separator != NULL))
				printf("%s", separator);
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
