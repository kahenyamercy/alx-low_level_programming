#include "main.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to be represented as a binary
 *
 */
void print_binary(unsigned long int n)
{
	unsigned long int temp = n;
	int num_bits = 0;
	int i;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/*determine num of bits in a num*/
	while (temp > 0)
	{
		num_bits++;
		temp >>= 1;
	}
	/*iterate fom the most sigificant bit to the least*/
	for (i = num_bits - 1; i >= 0; i--)
	{
		/*print the current bit*/
		_putchar(((n >> i) & 1) + '0');
	}
}
