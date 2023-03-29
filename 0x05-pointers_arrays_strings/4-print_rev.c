#include "main.h"

/**
 * print_rev - check code
 * @s: a character pointer
 * Description: length of a string.
 * Return: Nothing
 */
void print_rev(char *s)
{
	int lengt = 0;

	while (s[lengt] != '\0')
		lengt++;

	while (lengt)
		_putchar(s[--lengt]);

	-putchar('\n');
}
