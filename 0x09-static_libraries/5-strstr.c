#include "main.h"
/**
 * *_strstr - a function that locates a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: result
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		p1 = haystack;
		p2 = needle;
		while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (*p2 == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
