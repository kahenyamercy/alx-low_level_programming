#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c, count;

	printf("%lu, %lu", a, b);

	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lu", c);
	}

	printf("\n");

	return (0);
}
