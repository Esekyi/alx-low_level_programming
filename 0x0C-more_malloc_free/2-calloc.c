#include "main.h"
#include <stdlib.h>

/**
 * _calloc - check code
 * @nmemb: array
 * @size: size in bytes of each
 * Description: A function that allocates memory for an array
 *
 * Return: A pointer to
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*(space + i) = 0;

	return (space);
}
