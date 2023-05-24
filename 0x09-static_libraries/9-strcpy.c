#include "main.h"
/**
 * _strcpy - Copies a string from src to dest
 *
 * @dest: Pointer to the destination buffer
 * @src: Pointer to the source string
 *
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy the string from src to dest */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Append the null terminator */
	dest[i] = '\0';
	return (dest);
}
