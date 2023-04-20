#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes of its own main function
 * @argc: number of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 on success, 1 if incorrect number of arguments,
 * 2 if negative byte count
 */
int main(int argc, char *argv[])
{
	int i, num_bytes;
	char *addr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	addr = (char *)&main;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", addr[i]);
		if (i == num_bytes - 1)
			printf("\n");
		else
			printf(" ");
	}

	return (0);
}
