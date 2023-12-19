#include "myheaders.h"
/**
 * main - A program to print _putchar using funcion
 * Return: 0 for success
 */
int main(void)
{
	char c[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
	return (0);
}
