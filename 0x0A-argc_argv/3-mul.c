#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiply two numbers
 * @argc: argument counter
 * @argv: an array for argc
 * Return: sum of input numbers
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
