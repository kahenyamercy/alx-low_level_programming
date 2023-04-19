#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array
 * @array: array to be checked for integers
 * @size:  number of elements in the array array
 * @cmp: pointer to a function used to compare vales
 * Return: index of the first element for which
 * the cmp function does not return 0, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);

}
