#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 98; count++)
	{
		printf("%lu", fib2);
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;

		if (count != 97)
			printf(", ");
	}
	printf("\n");
	return (0);
}
