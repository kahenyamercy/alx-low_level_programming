#include "main.h"
/**
 * _sqrt_helper - Computes the square root of a number using a binary search
 * @start: The starting index of the search range
 * @end: The ending index of the search range
 * @n: The number whose square root is being computed
 * @ans: The current best approximation of the square root
 *
 * Return: The square root of n
 */
int _sqrt_helper(int start, int end, int n, int ans)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else if (start > end)
	{
		if (ans * ans <= n && (ans + 1) * (ans + 1) > n)
			return (ans);
		else
			return (ans + 1);
	}
	else
	{
		int mid = (start + end) / 2;

		if (mid * mid == n)
			return (mid);
		else if (mid * mid < n)
			return (_sqrt_helper(mid + 1, end, n, mid));
		else
			return (_sqrt_helper(start, mid - 1, n, ans));
	}
}

/**
 * _sqrt_recursion - Computes the square root of a number using recursion
 * @n: The number whose square root is being computed
 *
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(1, n, n, 0));
}
