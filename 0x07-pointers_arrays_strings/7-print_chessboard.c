#include "main.h"
/**
 * print_chessboard -  it prints chessboard
 * @a: arry representing the board of chess 
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int t;

	for (m = 0; m < 8; m++)
	{
		for (t = 0; t < 8; t++)
		{
			_putchar(a[m][t]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
