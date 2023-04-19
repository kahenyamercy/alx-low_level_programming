#include "3-calc.h"
/**
 * op_add - sums up a and b and return result
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subracts b from a
 * @a: first integer
 * @b: second integer
 * Return: subraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - performs multiplication
 * @a: first value
 * @b: second value
 * Return: result of multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - performs a division
 * @a: first value
 * @b: second value
 * Return: result of division
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns the remainder after division
 * @a: first value
 * @b: second value
 * Return: remainder of division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
