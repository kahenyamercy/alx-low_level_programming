#include <stdio.h>

/**
 * main - Prints the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 1, b = 2, c;
	int i;

	printf("%d, %d, ", a, b);
	for (i = 2; i < 50; i++)
	{
		c = a + b;
		printf("%d", c);
		if (i <= 49)
			printf(", ");
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
