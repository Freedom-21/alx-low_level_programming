#include "main.h"

/**
 * puts2 - print every other string
 * @str: a string to be printed
 * Return: 0 for success
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		if (str[i] >= 32 && str[i] <= 126)
			_putchar(str[i]);
	}
	_putchar('\n');
}
