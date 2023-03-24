#include "main.h"

/**
 * print_line - check main
 * Description: a function that draws a straight line,
 * followed by a new line.
 * @n: input integer.
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
