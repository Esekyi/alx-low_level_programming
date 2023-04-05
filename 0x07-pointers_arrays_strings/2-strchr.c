#include "main.h"
#include <stddef.h>

/**
 * _strchr - check code
 * @s: pointer containing string
 * @c: character to be found
 * Description: Locates a character in a string
 * Return: a pointer to the first character found
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
