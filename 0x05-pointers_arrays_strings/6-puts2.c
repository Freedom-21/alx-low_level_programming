#include "main.h"

/**
 * puts2 - print every other string
 * @str: a string to be printed
 * Return: 0 for success
 */

void puts2(char *str)
{
	while (*str != '\0' && *(str + 1) != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
