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
	char *ptrn1, *ptrn2, *ptrn3;

	for (ptrn1 = haystack; *ptrn1 != '\0'; ptrn1++)
	{
		ptrn2 = ptrn1;
		ptrn3 = needle;
		while (*ptrn3 != '\0' && *ptrn2 == *ptrn3)
		{
			ptrn2++;
			ptrn3++;
		}
		if (*ptrn3 == '\0')
		{
			return (ptrn1);
		}
	}
	return (NULL);
}
