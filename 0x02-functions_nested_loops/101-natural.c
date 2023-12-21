#include <stdio.h>
/**
 * main - compute sum of all natural nums mult of 3 or 5
 * Return: 0 for success
 */
int main(void)
{
	int i, sum;

	sum = 0;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			sum = sum + i;
		}
		i++;
	}

	printf("%d", sum);
	printf("\n");

	return (0);
}
