#include <stdio.h>
/**
 * main - print all possible combination of two unique digits
 * Return: 0 for success
 */
int main(void)
{
	int fnum;
	int snum;

	for (fnum = 0; fnum < 9; fnum++)
	{
		for (snum = fnum + 1; snum < 10; snum++)
		{
			putchar((fnum % 10) + '0');
			putchar((snum % 10) + '0');

			if (fnum == 8 && snum == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
