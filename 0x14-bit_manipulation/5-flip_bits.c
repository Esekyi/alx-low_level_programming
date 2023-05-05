#include "main.h"

/**
 * flip_bits - check code.
 * @n: unsigned long integer to compare
 * @m: unsigned long integer to compare
 * Description: returns the number of bits to flip
 * Return: the number of bits to flip to get from n to m
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int _xor_result = n ^ m;
	unsigned int _flip_count = 0;

	while (_xor_result)
	{
		_flip_count += _xor_result & 1;
		_xor_result >>= 1;
	}

	return (_flip_count);
}
