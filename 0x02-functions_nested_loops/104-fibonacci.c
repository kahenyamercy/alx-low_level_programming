#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	unsigned int a = 1, b = 2, c, count;

	printf("%u, %u", a, b);

	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %u", c);
	}

	printf("\n");

	return (0);
}
