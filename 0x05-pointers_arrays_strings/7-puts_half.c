#include "main.h"
/**
 * puts_half - Prints the second half of a string
 *
 * @str: Pointer to the string to be printed
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i;

	/* Find the length of the string */
	while (str[len] != '\0')
		len++;

	/* Print the second half of the string */
	for (i = (len + 1) / 2; i < len; i++)
		_putchar(str[i]);

	_putchar('\n');
}
