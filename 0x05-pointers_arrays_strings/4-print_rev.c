#include "main.h"
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string
 *
 * This function prints the characters of the string @s in reverse order,
 * followed by a new line character. It does not return anything.
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;

	for (i = len - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
