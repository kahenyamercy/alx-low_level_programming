#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long a = 1;
	unsigned long b = 2;
	unsigned long c;
	int i;

	printf("%lu, %lu, ", a, b);
	for (i = 1; i < 49; i++)
	{
		c = a + b;
		printf("%lu", c);
		a = b;
		b = c;
		if (i == 49)
		printf("\n");
		else
			printf(", ");
	}
	return (0);
}
