#include "main.h"

/**
 * print_triangle - check main.
 * @size: input integer
 * Description: a function that prints a triangle,
 * followed by a new line.
 * Return: Always 0
 */

void print_triangle(int size)
{
	int outer = 0, inner, n = size - 1;

	if (size > 0)
	{
		for (; outer < size; outer++)
		{
			for (inner = 0; inner < size; inner++)
			{
				if (inner < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
