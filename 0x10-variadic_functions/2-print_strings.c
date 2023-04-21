#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings -  function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 *
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_arg;
	char *str;
	unsigned int i;

	va_start(str_arg, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(str_arg, char*);
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(str_arg);
}
