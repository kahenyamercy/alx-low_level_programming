#include <stdio.h>
/**
 * main - Entry point
 * Description: Print A-Z exept q and e
 * Return: Always 0 (success)
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	putchar('\n');
	return (0);
}
