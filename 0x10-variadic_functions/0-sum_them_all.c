#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: first parameter
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i, sum = 0;

	va_start(p, n);

	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(p, unsigned int);
	}
	va_end(p);
	return (sum);
}
