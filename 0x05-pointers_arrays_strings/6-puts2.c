#include "main.h"

/**
 * puts2 - a function that prints every other character
 * followed by a new line
 * @str: string pointer.
 * Description: Nothing here
 * Return: Nothing
 */
void puts2(char *str)
{
	int lengt = 0;
	int i = 0;

	while (str[lengt] != '\0')
		lengt++;
	lengt -= 1;

	for (; i <= lengt; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
