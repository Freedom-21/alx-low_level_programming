#include "main.h"

/**
 * more_numbers - printing numbers b/n 0-14 mult by 10
 * Return: 0 for success
 */
void more_numbers(void)
{
	int i;
	int c;

	while (c < 10)
	{
		for (i = 0;  i <= 9; i++)
			_putchar(i + '0');
		for (i = 10; i <= 14; i++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}

	_putchar('\n');
	c++;
	}
}
