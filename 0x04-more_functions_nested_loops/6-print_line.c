#include "main.h"

/**
 * print_line - draw a stright line in a terminal
 * @n: number of characters
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
