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
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n')
}
