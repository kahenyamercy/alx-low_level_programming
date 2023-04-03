#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: string pointed by the pointer
 * @c: characterto be found
 * Return: pointer to the 1st occurrence of char c
 * in the string s, else NULL if the char is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int t;

	for (t = 0; s[t] != '\0'; t++)
	{
		if (s[t] == c)
			return (s + t);
	}

	if (s[t] == c)
		return (s + t);

	return (NULL);
}
