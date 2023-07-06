#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index
 * @n: pointer to number to modify
 * @index: index of the bit to set to 0, starting from 0
 *
 * Return: 1 worked, or -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		/* index is out of range */
		return (-1);
	}

	*n &= ~(1UL << index);
	return (1);
}
