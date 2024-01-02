#include "main.h"

/**
 * print_rev - print string in revese order
 * @s: string to be printed
 * Return: 0 for success
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
