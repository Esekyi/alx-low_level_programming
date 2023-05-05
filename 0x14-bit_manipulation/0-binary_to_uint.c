#include "main.h"

/**
 * _strlen - check code
 * @s: strings to be counted
 * Description: function to return the number of strings
 * Return: number of string char
 */

int _strlen(const char *s)
{
	int count = 0;

	while (s[count])
		count++;

	return (count);
}

/**
 * binary_to_uint - check code
 * @b: a string of 0's and 1's
 * Description: a function that converts a binary,
 * number to an unsigned int.
 * Return: 0 or 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int lengt = 0, counter = 0, sum_res = 0;

	if (b == NULL)
		return (0);
	lengt = _strlen(b);
	while (lengt--)
	{
		if (b[lengt] != 48 && b[lengt] != 49)
			return (0);
		if (b[lengt] == 49)
			sum_res += 1 << counter;
		counter++;
	}
	return (sum_res);
}
