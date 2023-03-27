#include "main.h"
#include <stddef.h>
/**
 * puts2 - Prints every other character of a string,
 * starting with the first character.
 *
 * @str: Pointer to the string to be printed.
 *
 * Description: This function prints every other character of a string,
 * starting with the first character, followed by a new line.
 * If the string is empty or the pointer passed as argument is null,
 * the function does nothing.
 */
void puts2(char *str)
{
	int i;

	if (str == NULL)
		return;
	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
