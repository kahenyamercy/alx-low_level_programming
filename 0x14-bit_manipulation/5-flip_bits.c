#include "main.h"
/**
 * flip_bits - Counts the number of bits that need to be flipped
 *             to get from one number to another
 * @n: the first unsigned long int
 * @m: the second unsigned long int
 *
 * Return: the number of bits that need to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}

	return (count);
}
