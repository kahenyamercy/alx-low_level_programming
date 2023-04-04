#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints diagonals of a square matrix of integers
 * @a: pointer to array
 * @size: size of integer
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int m, add1 = 0, add2 = 0;

	for (m = 0; m < size; m++)
	{
		add1 += *(a + m * size + m);
	}
	for (m = 0; m < size; m++)
	{
		add2 += *(a + m * size + (size - 1 - m));
	}
	printf("%d, %d\n", add1, add2);
}
