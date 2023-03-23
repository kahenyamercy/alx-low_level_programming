#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 *
 * Return: Nothing.
 */
void print_number(int n)
{
	int divisor = 1, i = 0;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	while (n / divisor > 9)
		divisor *= 10;
	while (divisor)
	{
		i = n / divisor;
		_putchar(i + '0');
		n %= divisor;

		divisor /= 10;
	}
}
