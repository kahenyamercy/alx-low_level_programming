#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: s
 */
char *rot13(char *s)
{
	int i, j;
	char *p = s;
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*p)
	{
		i = 0;
		j = 0;

		while (*(alpha + i) != '\0')
		{
			if (*(alpha + i) == *p)
			{
				*p = *(rot13 + j);
				break;
			}
			i++;
			j++;
		}
		p++;
	}
	return (s);
}
