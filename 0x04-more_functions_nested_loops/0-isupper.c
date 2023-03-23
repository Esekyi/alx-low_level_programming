#include "main.h"

/**
 * _isupper - check main.
 * @c: an input number
 * Description: function to check for uppercase character.
 * Return: 1 if c is upper and 0 otherwise.
 */

int _isupper(int c)
{
	char alph;
	int retVal = 0;

	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		if (c == alph)
			retVal = 1;
		else
			retVal = 0;
	}
	return (retVal);
}
