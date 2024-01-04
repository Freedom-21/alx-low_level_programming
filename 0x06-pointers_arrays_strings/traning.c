#include <stdio.h>
#include "main.h"

void main(void)
{
	char str1[] = "hello";
	char str2[] = "world";
	char res[];
	int i;
	int j;
	int len1 = 0;
	int len2 = 0;

	while (str2[len1] != '\0')
		len1++;
	while (str1[len2] != '\0')
		len2++;
	for (i = 0; i < len1; i++)
		res[i] = str1[i];
	for (j = 0; j < len2; j++)
		res[j] = str2[j];

	return res;

}
