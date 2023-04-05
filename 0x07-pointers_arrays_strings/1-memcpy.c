#include "main.h"

/**
 * _memcpy - check code
 * @dest: destination area
 * @src: source memory area
 * @n: unsigned integer
 * Description: a function that copies n bytes from memory area src to memory
 * area dest
 * Return: a pointer to dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ddest = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (ddest);
}
