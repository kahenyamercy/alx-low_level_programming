#include "main.h"
/**
 * print_line - function that draws a straight line
 * @n: number of times the character should be printed
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}

	_putchar('\n');
}
