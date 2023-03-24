#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2, c, count = 0;

	printf("%d, %d, ", a, b);
	count += 2;

	while (count < 98)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);
		count++;

		if (count < 98)
		{
			printf(", ");
		}
	}

	printf("\n");
	return (0);
}
