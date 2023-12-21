#include "main.h"

/**
 * more_numbers - printing numbers b/n 0-14 mult by 10
 * Return: 0 for success
 */
void more_numbers(void)
{
	int i;
	int c;

	for (c = 0; c < 10; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar(i / 10 + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
