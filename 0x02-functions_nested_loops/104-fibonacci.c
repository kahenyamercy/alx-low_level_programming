#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	unsigned long a = 1, b = 2, c, count = 2;

	printf("%lu, %lu", a, b);
	while (count < 97777777)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lu", c);
		count++;
	}
	printf("\n");
	return (0);
}
