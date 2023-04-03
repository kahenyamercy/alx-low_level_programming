#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination area of copied bytes
 * @src: source of bytes
 * @n: number of copied bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int t;

	for (t = 0; t < n && src[t] != '\0'; t++)
		dest[t] = src[t];
	return (dest);
}
