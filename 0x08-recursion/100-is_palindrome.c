#include "main.h"
#include <string.h>
/**
 * is_palindrome - returns a palindrome
 * @s: string to be checked
 * Return: 1 if string is a palindrome else 0
 */
int is_palindrome(char *s)
{
	int len = strlen(s);
	int m = 0;
	int t = 0;

	if (len == 0 || len == 1)
	{
		return (1);
	}
	if (m == t)
	{
		return (1);
	}
	m++;
	t--;
	return (0);
}
