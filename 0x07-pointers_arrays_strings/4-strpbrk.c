#include "main.h"
#include <stddef.h>
#include <string.h>
/**
 * _strpbrk - searches for any set of bytes in a string
 * @s: string pointed by the pointer
 * @accept: holds bytes to be matched
 * Return: a pointer to byte if bytes matches else NULL
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
