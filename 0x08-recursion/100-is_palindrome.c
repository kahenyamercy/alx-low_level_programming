#include "main.h"
#include <string.h>
/**
 * is_palindrome - returns a palindrome
 * @s: string to be checked
 * @left: the left index in the string
 * @right: the right index in the string
 * Return: 1 if string is a palindrome else 0
 */
int is_palindrome_helper(char *s, int left, int right)
{
	if (left >= right)
	{
		return (1);
	}
	else if (s[left] != s[right])
	{
		return (0);
	}
	else 
	{
		return (is_palindrome_helper(s, left + 1, right - 1));
	}
}

/**
 * is_palindrome - returns a palindrome
 * @s: string to be checked
 * Return: 1 if string is a palindrome else 0
 */
int is_palindrome(char *s)
{
	int length = strlen(s);
	int left = 0;
	int right = length -1;

		if (length == 0 || length == 1)
		{
			return (1);
		}
	return (is_palindrome_helper(s, left, right));

}
