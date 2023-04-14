#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - multiplies two positive numbers
 * @argc: the number of arguments passed to the program
 * @argv: an array of strings containing the arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int i, j, len1, len2, carry, n1, n2, sum;
	int *result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (98);
			}
		}
	}

	len1 = strlen(argv[1]);
	len2 = strlen(argv[2]);

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		return (98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		n1 = argv[1][i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = argv[2][j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		if (carry)
			result[i + j + 1] = carry;
	}

	i = 0;
	while (result[i] == 0 && i < len1 + len2 - 1)
		i++;

	for (; i < len1 + len2; i++)
		printf("%d", result[i]);

	printf("\n");
	free(result);

	return (0);
}
