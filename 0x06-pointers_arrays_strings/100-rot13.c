#include "main.h"
/**
 * rot13 - encodes a string using rot13.
 * @s: string to be modified
 * Return: result
 */
char *rot13(char *s)
{
	char *result = s;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if ((s[i] >= 'a' && s[i] < 'n') || (s[i] >= 'A' && s[i] < 'N'))
			{
				result[i] = s[i] + 13;
			}
			else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			{
				result[i] = s[i] - 13;
			}
		}
	}
	return (result);
}
