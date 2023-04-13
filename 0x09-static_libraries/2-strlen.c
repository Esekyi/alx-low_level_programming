#include "main.h"

/**
 * _strlen - check code
 * @s: a character pointer
 * Description: length of a string.
 * Return: integer
 */
int _strlen(char *s)
{
	int lengt = 0;

	while (s[lengt] != '\0')
		lengt++;

	return (lengt);

}
