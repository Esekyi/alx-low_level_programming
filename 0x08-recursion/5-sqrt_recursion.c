#include "main.h"
int _sqrt(int ln, int li);

/**
 * _sqrt_recursion - check code
 * @n: an integer input
 * Description: a function that returns the natural sqrt of a number
 * Return: integer results of sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt(n, 1));
}

/**
 * _sqrt - check code
 * @li: last value
 * @ln: the root value
 * Description: determines and hold the square root value.
 * Return: Square root value
 */

int _sqrt(int ln, int li)
{
	if (li * li == ln)
	{
		return (li);
	}
	if (li * li > ln)
	{
		return (-1);
	}
	return (_sqrt(ln, li + 1));
}
