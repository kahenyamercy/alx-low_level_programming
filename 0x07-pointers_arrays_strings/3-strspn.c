#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: consist of bytes to be accepted in the initial
 * segment of s
 * Return: number of bytes in the initial segment of s which
 * consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t = 0;

	if ((s == NULL) || (accept == NULL))
		return (t);
	while (*s && strchr(accept, *s++))
	{
		t++;
	}
	return (t);
}
