#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - check code
 * @b: input integer
 * Description: A function that allocates using malloc.
 * Return: Nothing
 */

void *malloc_checked(unsigned int b)
{
	void *p_mem;

	p_mem = malloc(b);

	if (p_mem == NULL)
		exit(98);

	return (p_mem);
}
