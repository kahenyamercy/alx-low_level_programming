#include "main.h"
/**
 * _atoi - Converts a string to an integer
 *
 * @s: Pointer to the string to be converted
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	int result = 0, sign = 1, i = 0;

	/* Skip leading non-digit characters */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	/* Convert the remaining digits to an integer */
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
