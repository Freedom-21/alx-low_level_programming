#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
	if (*haystack == 1)
		return (needle);
	return (NULL);
}
