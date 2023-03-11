#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring to be located
 * Return: 0
*/
char *_strstr(char *haystack, char *needle)
{
	int i;

	for (; haystack[0]; haystack++)
	{
		for (i = 0; haystack[i] == needle[i]; i++)
		{
		}
		if (!(needle[i]))
			return (haystack);
	}
	return (0);
}

