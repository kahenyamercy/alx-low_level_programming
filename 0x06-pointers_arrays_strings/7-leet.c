#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: input string
 * Return: s
 */
char *leet(char *s)
{
	char *letters = "AEOTLaeotl";
	char *numbers = "4307104310";
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break;
			}
		}
	}

	return (s);
}
