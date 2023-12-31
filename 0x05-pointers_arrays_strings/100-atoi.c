#include "main.h"

/**
 * _atoi - function to convert a string to an integer
 * @s: an input string to be converted
 * Return: 0 for success
 */

int _atoi(char *s)
{
	int res = 0;
	int i = 0;
	int sign = 1;

	while (s[i] == ' ')
		i++;

	while(s[i] == '+' || s[i] == '-')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}

	return sign * res;
}
