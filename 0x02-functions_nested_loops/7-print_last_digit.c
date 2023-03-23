#include "main.h"

/**
 * print_last_digit - Check main
 * @r: integer input
 * Description: function prints the last digit of a given number
 * Return: last digit of number r
 */

int print_last_digit(int r)
{
	int i;

	if (r < 0)
		i = -1 * (r % 10);
	else
		i = r % 10;

	_putchar(i);
	return (i);
}
