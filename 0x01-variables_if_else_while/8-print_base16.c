#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 0 ; number <= 9 ; number++)
		putchar(number + '0');
	for (number = 'a' ; number <= 'f'; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
