#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: buffer to store results
 * @size_r: buffer size
 * Return: r else if the result can't be stored in r return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int result = *n1 + *n2;
		int size = sizeof(result);

		if (size < size_r)
		{
			*r = size;
		}

		else
		{
			return (0);
		}
		return (r);

}
