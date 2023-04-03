#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: string pointer  to be searched
 * @needle: pointer to substring to find
 * Return: pointer to the beginning of the located substring
 * else NULL
 */
char *_strstr(char *haystack, char *needle)
{
	if (!*needle)/*if it is emptyreturn haystack*/
		return (haystack);

	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && !strcmp(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
