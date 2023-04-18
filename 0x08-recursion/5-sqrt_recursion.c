#include "main.h"
/**
 * _sqrt_recursion - square root of a number
 * @n: num to be checked
 * Return:sqrt of n else -1
 */
int _sqrt_recursion(int n)
{
	int start = 1, end = n, mid, ans;

	/* Base cases*/
	if (n < 0)
	{
		return (-1); /* Invalid input*/
	}
	else if (n == 0 || n == 1)
	{
		return (n); /* Base case: square root of 0 or 1 is itself*/
	}
	/* Recursive case: binary search for the square root*/
	while (start <= end)
	{
		mid = (start + end) / 2;
		if (mid * mid == n)
		{
			return (mid); /* Found exact square root*/
		}
		else if (mid * mid < n)
		{
			start = mid + 1;
			ans = mid; /* Save as potential answer*/
		}
		else
		{
			end = mid - 1;
		}
	}
	/* Return the closest integer approximation*/
	if (ans * ans <= n && (ans + 1) * (ans + 1) > n)
	{
		return (ans);
	}
	else
	{
		return (ans + 1);
	}
	return (ans); /* Return the closest integer approximation*/
}
