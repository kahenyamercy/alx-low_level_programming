#include <stdio.h>
/**
 * main - Entry point
 * Description: Print numbers base 10
 * Return: 0 Always (success)
 */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	printf("\n");
	return (0);
}
