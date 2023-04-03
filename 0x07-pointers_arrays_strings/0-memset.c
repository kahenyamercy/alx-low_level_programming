#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: pointer to string
 * @b: constant byte
 * @n: bytes of the memory area pointed by s
 * Return: a pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n; t++)
		s[t] = b;
	return (s);
}
