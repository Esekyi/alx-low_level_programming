#include "main.h"

/**
 * print_binary - check code
 * @n: unsigned long integer
 * Description:  function that prints the binary representation,
 * of an unsigned long integer n
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	unsigned long int _mask = (unsigned long int) 1 << (sizeof(unsigned long int) * 8 - 1);
	int _flag = 0;

	while (_mask > 0)
	{
		if (n & _mask)
		{
			_putchar('1');
			_flag = 1;
		}
		else if (_flag)
		{
			_putchar('0');
		}
		_mask >>= 1;
	}
	if (!_flag)
	{
		_putchar('0');
	}
}
