#include "main.h"
/**
 * rev_string - Reverses a string in place.
 *
 * @s: The string to be reversed.
 *
 * Description: This function reverses the order of characters in a string
 * in place, meaning that it modifies the original string passed as argument.
 */
void rev_string(char *s)
{
	int len = 0;
	char *p1 = s, *p2 = s, tmp;

	/* Find the end of the string and move p2 there */
	while (*p2 != '\0')
	{
		len++;
		p2++;
	}
	p2--;
	/* Swap characters from the ends towards the middle */
	while (p1 < p2)
	{
		tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;

		p1++;
		p2--;
	}
}
