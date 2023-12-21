#include <stdio.h>
/**
 * main - compute sum of all natural nums mult of 3 or 5
 * Return: 0 for success
 */
int main(void)
{
	int i, sum;

	sum = 0;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5))
			sum = sum + i;
	}

	printf("The sum equals : %d", sum);
	printf("\n");

	return (0);
}
