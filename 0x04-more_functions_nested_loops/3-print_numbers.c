#include "main.h"

/**
 * print_numbers - check main.
 * Description: function to print numbers from 0 - 9
 * Return: Nothing.
 */

void print_numbers(void)
{
	int numb = 0;

	for (; numb <= 9; numb++)
		_putchar(numb);

	_putchar('\n');
}
