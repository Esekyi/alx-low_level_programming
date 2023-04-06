#include "main.h"

/**
 * _strlen_recursion - check code.
 * @s: input parameter of type string
 * Description: function that returns the length of a string.
 * Return: the length in integer of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return  (1 + _strlen_recursion(s + 1));
	}
}
