#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: result of operation 0 if successful
 */
int main(int argc, char *argv[])
{
	int num1;
	int num2;
	int result;
	int (*func)(int, int);
	char c;

	if (argc != 4)/*Check if the function pointer is valid*/
	{
		printf("Error\n");
		exit(98);
	}
	/*converts first and third arguments to integers*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	/*Get a function pointer based on operator provided as the second argument*/
	func = get_op_func(argv[2]);

	if (!func)/*Check if the function pointer is valid*/
	{
		printf("Error\n");
		exit(99);
	}
	c = *argv[2];/*Get the operator character*/

	/*Check if division or modulo by zero is attempted*/
	if ((c == '/' || c == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	/* Perform the operation*/
	result = func(num1, num2);
	/*prints the result*/
	printf("%d\n", result);
	return (0);
}
