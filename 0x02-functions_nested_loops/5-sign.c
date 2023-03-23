#include "main.h"

/**
 * print_sign - Check Holberton
 * @n: input number
 * Description: This function prints the sign of a number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */

int print_sign(int n)
{
	int ret_val = 0;

	if (n > 0)
	{
		ret_val = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		ret_val = 0;
		_putchar('0');
	}
	else
	{
		ret_val = -1;
		_putchar('-');
	}

	return (ret_val);
}
