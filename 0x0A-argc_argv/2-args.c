#include <stdio.h>

/**
 * main - a program that prints all arguments it receives.
 * @argc: argument counter
 * @argv: an array of argc
 * Return: all arguments
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
