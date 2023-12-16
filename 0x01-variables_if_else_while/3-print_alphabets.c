#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lcase = 'a';
	char ucase = 'A';

	while (lcase <= 'z')
	{
		putchar(lcase);
		lcase++;
	}

	while (ucase <= 'Z')
	{
		putchar(ucase);
		ucase++;
	}

	putchar('\n');

	return (0);
}

