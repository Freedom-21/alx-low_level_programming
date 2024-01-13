#include <stdio.h>

/**
 * main - a function that prints its name
 * @argc: counts the number of arguments
 * @argv: an array for the argc
 * Return: the its name
 */

int main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
