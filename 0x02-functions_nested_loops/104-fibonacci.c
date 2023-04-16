#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	unsigned long long int a = 1, b = 2, c, count;

	printf("%llu, %llu", a, b);

	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %llu", c);
	}

	printf("\n");

	return (0);
}
