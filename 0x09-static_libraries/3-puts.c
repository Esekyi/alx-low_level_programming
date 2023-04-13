#include "main.h"

/**
 * _puts - check code.
 * @str: string literal
 * Description: print a string followed by an new line
 * Return: Nothing
 */
void _puts(char *str)
{
	int iterator = 0;

	while (str[iterator] != '\0')
	{
		_putchar(str[iterator]);
		iterator++;
	}
	_putchar('\n');
}
