#include "main.h"

/**
 * _puts - print string
 * @s:string to be printed
 * Return: 0 for success
 */

void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
