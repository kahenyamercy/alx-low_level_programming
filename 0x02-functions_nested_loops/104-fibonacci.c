#include <stdio.h>
/**
 * main - entry point
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
		printf("%d", c);
		count++;
		if (count < 98)
		{
			printf(", ");
		}
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
