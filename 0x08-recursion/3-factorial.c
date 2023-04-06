#include "main.h"

/**
 * factorial - check code
 * @n: input integer
 * Description: function that returns the factorial of a number,
 * if n is lower than 0 return -1
 * Return: factorial of a number.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

