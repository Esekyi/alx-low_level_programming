#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints the 10x alphabet in lowercase followed by a new line
 * Return: Nothing.
 */

void print_alphabet_x10(void)
{
	char alph;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
