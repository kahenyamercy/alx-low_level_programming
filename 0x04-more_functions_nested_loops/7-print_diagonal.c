#include "main.h"
/**
 * print_diagonal - function that draws a diagonal line
 * @n: number of times the character is to be printed
 * Return: void
 */
void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('\\');
	}

	_putchar('\n');
}
