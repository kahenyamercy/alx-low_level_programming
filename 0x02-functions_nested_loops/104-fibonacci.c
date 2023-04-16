#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int a = 1, b = 2, c, count;

	putchar(a + '0');
	putchar(',');
	putchar(' ');
	putchar(b + '0');

	for (count = 3; count <= 98; count++)
	{
		c = a + b;
		putchar(',');
		putchar(' ');
		if (c > 9)
		{
			putchar((c / 10) + '0');
			putchar((c % 10) + '0');
		}
		else
		{
			putchar(c + '0');
		}
		a = b;
		b = c;
	}

	putchar('\n');

	return (0);
}
