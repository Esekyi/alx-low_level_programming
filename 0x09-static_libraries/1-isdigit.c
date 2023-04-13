#include "main.h"

/**
 * _isdigit - check main.
 * @c: an input number
 * Description: function to check for didits through 0 - 9.
 * Return: 1 if c is a digit and 0 otherwise.
 */

int _isdigit(int c)
{
	char digit = '0';
	int retVal = 0;

	for (; digit <= '9'; digit++)
	{
		if (c == digit)
		{
			retVal = 1;
			break;
		}
	}
	return (retVal);
}
