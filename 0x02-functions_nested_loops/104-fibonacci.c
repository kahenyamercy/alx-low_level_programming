#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long a = 1, b = 2;
	unsigned long i;

	printf("%lu, %lu ", a, b);
	for (i = 2; i < 98; i++)
	{
		unsigned long c = a + b;

		printf("%lu", c);
		if (i < 97)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
