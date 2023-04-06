#include "main.h"

/**
 * _print_rev_recursion - check code.
 * @s: an input parameter of a string type
 * Description: function that prints a string in reverse.
 * Return: Nothing.
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
