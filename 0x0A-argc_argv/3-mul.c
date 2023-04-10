#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - entry point
 * @argc:number of arguments
 * @argv:argument vector
 * Return: 0 success 1 error
 */
int main(int argc, char *argv[])
{
	int a = atoi(argv[1]);
	int b = atoi(argv[2]);
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	result = a * b;
	printf("%d\n", result);

	return (0);
}
