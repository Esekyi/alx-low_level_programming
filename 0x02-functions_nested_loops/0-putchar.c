#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	char word[8] = "_putchar";
	int iterate;

	for (iterate = 0; iterate < 8; iterate++)
		_putchar(word[iterate]);
	_putchar('\n');
	return (0);
}
