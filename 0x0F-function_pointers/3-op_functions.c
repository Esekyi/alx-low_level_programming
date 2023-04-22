#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - check code
 * @a: integer - input integer a
 * @b: integer - input integer b
 * Description: returns the sum of a and b
 * Return: integer - returns an integer of sum a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - check code
 * @a: integer - input integer a
 * @b: integer - input integer b
 * Description: returns the sub of a and b
 * Return: integer - returns an integer of subtraction a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - check code
 * @a: integer - input integer a
 * @b: integer - input integer b
 * Description: returns the multiplicstion of a and b
 * Return: integer - returns an integer of multiplication a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - check code
 * @a: integer - input integer a
 * @b: integer - input integer b
 * Description: returns the sub of a and b
 * Return: integer - returns an integer of subtraction a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - check code
 * @a: integer - input integer a
 * @b: integer - input integer b
 * Description: returns the mod of a and b
 * Return: integer - returns an integer of modulo a and b
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
