#include "main.h"

/**
 * _memset - check code
 * @s: memory area pointed to
 * @b: constant byte
 * @n: unsigned integer
 * Description: a function that fills the first n bytes of the memory
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *s_trt = (char *) s;
	unsigned int i = 0;

	for (; i < n; ++i)
	{
		s_trt[i] = b;
	}

	return (s);
}
