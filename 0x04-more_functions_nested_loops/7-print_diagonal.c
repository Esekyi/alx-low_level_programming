#include "main.h"

/**
 * print_diagonal - check main
 * Description: a function that draws a diagonal line,
 * followed by a new line.
 * @n: input integer.
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('\\');
	}
	_putchar('\n');
}
