#include <stdio.h>
/**
 * main - Entry point
 * Description: Print the lowercase alphabet in reverse, followed by a new line
 * Return: Always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
