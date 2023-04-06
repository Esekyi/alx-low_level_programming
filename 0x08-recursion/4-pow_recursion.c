#include "main.h"

/**
 * _pow_recursion - check code
 * @x: an integer subscript
 * @y: integer superscript
 * Description: a function that returns the value of x raised to the power of ,
 * Return: integer results of **.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
