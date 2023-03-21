#include "main.h"
/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number.
 *
 * Return: void.
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
				_putchar(',');
			print_to_98(i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
				_putchar(',');
			print_to_98(i);
		}
	}
	_putchar('\n');
}

