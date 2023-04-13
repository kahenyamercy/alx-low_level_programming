#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: integer to be allocated memory
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *b1;

	b1 = malloc(sizeof(int *) * b);
	if (b1 == NULL)
		exit(98);
	return (b1);
}
