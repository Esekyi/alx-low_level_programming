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

/**
 * rev_string - check code
 * @s: a character pointer
 * Description: length of a string in revers without printing.
 * Return: Nothing
 */

void rev_string(char *s)
{
	int itr, lengt;
	char fr, ly;

	lengt = _strlen(s) - 1;
	itr = 0;
	while (itr < lengt)
	{
		fr = s[itr];
		ly = s[lengt];
		s[itr++] = ly;
		s[lengt--] = fr;
	}
}
