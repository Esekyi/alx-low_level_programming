#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - check code
 * @s: pointer containing string
 * @accept: character to be found
 * Description: Locates a character in a string
 * Return: a pointer to the first character found
 */

char *_strpbrk(char *s, char *accept)
{
	char *d_strt = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}

		accept = d_strt;
		s++;
	}
	return (NULL);
}
