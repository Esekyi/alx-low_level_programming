#include "main.h"
int is_prime_helper(int ln, int li);

/**
 * is_prime_number - check code
 * @n: an integer input
 * Description: a function that returns prime of a number
 * Return: integer results of 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, n - 1));
}

/**
 * is_prime_helper - check code
 * @ln: an integer input
 * @li: an input integer
 * Description: a function that returns a prime number
 * Return: integer result of 0 or 1.
 */

int is_prime_helper(int ln, int li)
{
	if (li == 1)
	{
		return (1);
	}

	if (ln % li == 0)
	{
		return (0);
	}
	return (is_prime_helper(ln, li - 1));
}
