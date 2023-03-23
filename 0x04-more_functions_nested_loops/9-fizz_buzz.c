#include <stdio.h>
/**
 * main - Entry point
 * Description: prints nmbers from 1 to 100,replacing multiples
 * of 3 with "Fizz" and multiples of 5 with "Buzz" and multiples
 * of both with "FizzBuzz".
 * Each number or word is separated by a space.
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}

		printf("\n");
	}
	return (0);
}
