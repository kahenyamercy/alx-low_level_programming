#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i = 2;
	long int largest_factor = 0;

	while (n > 1)
	{
		if (n % i == 0)
		{
			largest_factor = i;

			n /= i;
			while (n % i == 0)
			{
				n /= i;
			}
		}
		i++;
	}

	printf("%ld\n", largest_factor);

	return (0);
}
