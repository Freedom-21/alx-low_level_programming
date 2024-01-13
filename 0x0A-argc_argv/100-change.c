#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program that prints min number of coins to make change
 * @argc: argument counter
 * @argv: an array of argc
 * Return: changes
 */

int main(int argc, char *argv[])
{
	int i;
	int cents;
	int values[] = {25, 10, 5, 2, 1};
	int coins = (0);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && cents > 0; i++)
	{
		coins += cents / values[i];
		cents %= values[i];
	}
	printf("%d\n", coins);
	return (0);
}
