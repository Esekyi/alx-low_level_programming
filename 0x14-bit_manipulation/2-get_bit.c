#include "main.h"

/**
 * get_bit - check code.
 * @n: The number to retrieve the bit from.
 * @index: The index of the bit to retrieve.
 * Description: Returns the value of the bit at the given index
 * Return: The value of the bit at index index, or -1 if an error occurred.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int _mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	_mask = 1UL << index;

	if (n & _mask)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
