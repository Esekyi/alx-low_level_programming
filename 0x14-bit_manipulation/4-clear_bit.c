#include "main.h"

/**
 * clear_bit - check code
 * @n: A pointer to the number to modify.
 * @index: The index of the bit to clear.
 * Description: sets the value of a bit to 0
 * Return: 1 if it worked, or -1 if an error occurred.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int _mask;

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	_mask = 1UL << index;
	*n &= ~_mask;

	return (1);
}
