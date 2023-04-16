#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	long int a = 1, b = 2, c, count;

	printf("%ld, %ld", a, b);

	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %ld", c);
	}

	printf("\n");

	return (0);
}
