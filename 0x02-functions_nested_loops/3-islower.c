#include <ctype.h>
#include "main.h"
/**
 * _islower - check main.
 *@c: An input character
 * Description: _islower function
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _islower(int c);
{
	char alph;
	int lower = 0;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		if (alph == c)
			lower = 1;
	}
	return (lower);
}
