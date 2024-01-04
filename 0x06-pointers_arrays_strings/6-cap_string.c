#include "main.h"

/**
 * cap_string - function to capitalize words of string
 * @str: input string to be capitalized
 * Return: capitalized string
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 'a' + 'A';
	}

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			char seps[] = {' ', '\t', '\n', ',', ';', '.',
				'!', '?', '"', '(', ')', '{', '}', '\0'};
			int is_sep = 0;

			for (j = 0; seps[j] != '\0'; j++)
			{
				if (str[i - 1] == seps[j])
				{
					is_sep = 1;
					break;
				}
			}

			if (is_sep)
			{
				str[i] = str[i] - 'a' + 'A';
			}
		}
		i++;
	}
	return (str);
}
