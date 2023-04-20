#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - function that prints numbers
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function
 *
 * Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	/*Iterate over each integer argument*/
	for (i = 0; i < n; i++)
	{
		/*Retrieve the integer argument from the argument list*/
		printf("%d", va_arg(num, unsigned int));
		/*If there are more integers to print and a*/
		  /*separator was provided, print the separator*/
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	/*Clean up the argument list*/
	va_end(num);
	/*prints a new line*/
	printf("\n");

}
