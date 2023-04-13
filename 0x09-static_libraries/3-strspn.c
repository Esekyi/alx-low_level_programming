#include "main.h"

/**
 * _strspn - check code
 * @s: pointer containing string
 * @accept: character to be found
 * Description: Locates a character in a string
 * Return: a pointer to the first character found
 */

unsigned int _strspn(char *s, char *accept)
{
	char *d_strt = accept;
	int itrt = 0, raise;

	while (*s)
	{
		raise = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				itrt++;
				raise = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = d_strt;
		if (raise == 0)
			break;
	}
	return (itrt);
}
