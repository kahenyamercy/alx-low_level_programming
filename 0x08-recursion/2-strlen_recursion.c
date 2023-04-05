#include "main.h"
/**
 *  _strlen_recursion - returns the length of string
 *  @s: string length
 *  Return: s
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		_strlen_recursion(s + 1);
	return (*s);
}
