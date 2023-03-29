#include "main.h"
/**
 * *_strncat - concatenates two strings using at most n bytes
 * @dest: destination string
 * @src: source string
 * @n: amount of bytes used from src
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *dest_start = dest; /*save the start address of dest*/

	/*advance at most n bytes from src to dest*/
	while (*dest)
	{
		dest++;
	}
	while (*src && n > 0)
	{
		*dest++ = *src++;
	n--;
	}

	/*If null character is encountered in src before n bytes are read append
	 * null character to dest.*/
	if (*src == '\0')
	{
		*dest = '\0';
	}

	return (dest_start);
}
