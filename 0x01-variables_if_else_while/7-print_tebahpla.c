#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the lowercase alphabet in reverse, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int number;

	for (number = 'z'; number <= 'a'; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
