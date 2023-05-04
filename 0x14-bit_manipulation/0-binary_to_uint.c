#include "main.h"
#include <string.h>
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 *
 * Return:the converted number, or 0
 * if there is one or more chars in the string b that is not 0 or 1
 * b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int i, power = 1;

	if (b == NULL)
		return (0);
	for (i = strlen(b) - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		res += (b[i] - '0') * power;
		power *= 2;
	}
	return (res);
}
