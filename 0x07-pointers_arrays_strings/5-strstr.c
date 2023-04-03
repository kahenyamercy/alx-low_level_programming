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
	char *pointer = strstr(haystack, needle);

	return (pointer);
}
