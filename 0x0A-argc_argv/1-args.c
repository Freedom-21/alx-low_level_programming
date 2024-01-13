#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed to it
 * @argc: argument counter
 * @argv: an array of argc
 * Return: passed arguments
 */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
