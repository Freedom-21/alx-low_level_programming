#include "variadic_functions.h"

/**
 * print_strings - a function that prints strings
 * @separator: the string to be printed between strings
 * @n: number of strings passed to the function
 * Return: string or do not print and print (nil) if separator is NULL
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *string;

	if (n > 0)
	{
		va_start(args, n);

		i = 0;

		while (i < n)
		{
			string = va_arg(args, char *);
			if (string == NULL)
				printf("%s", "(nil)");
			else
				printf("%s", string);

			if ((i != (n - 1)) && (separator != NULL))
				printf("%s", separator);
			i++;
		}
		va_end(args);
	}
	printf("\n");
}
