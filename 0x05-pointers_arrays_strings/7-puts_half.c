#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: the string to be printed
 * Return: 0 for success
 */

void puts_half(char *str)
{
	int i;
	int start;
	int len = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		start = len / 2;
	else
		start = (len - 1) / 2;

	for (i = start; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
