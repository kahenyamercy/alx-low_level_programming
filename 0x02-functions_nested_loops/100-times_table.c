#include "main.h"
#include <stdio.h>
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: integer, the upper limit of the times table
 *
 * Return: void
 */
void print_times_table(int n)
{
	int i;
	int j;

	if (n < 0 || n > 15)
	{
		return;
	}
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			printf("%4d", i * j);
		}
		printf("\n");
	}
}
