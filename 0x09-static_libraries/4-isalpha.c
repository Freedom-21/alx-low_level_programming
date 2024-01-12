#include "main.h"
/**
 * _isalpha - checks for alphabetic char
 * @c: char to be checked
 * Return: 0 for success
 */
int _isalpha(int c)
{
	return ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'));
}
