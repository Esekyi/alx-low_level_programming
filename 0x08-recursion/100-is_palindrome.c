#include "main.h"

int _strlen_recursion(char *s);
int _helper(char *s, int len);

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


/**
 * is_palindrome - check code
 * @s: character string
 * Description: a function to determine if a string is a
 * palindrome or not.
 * Return: 1 if it is or 0 is otherwise.
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len <= 1)
		return (1);
	return (_helper(s, len));
}

/**
 * _helper - function that reverse the input string
 * @s: An input string
 * @len: the length of the string s
 * Return: A reverse string
 */

int _helper(char *s, int len)
{
	if (len <= 1)
		return (1);
	else if (*s == *(s + len - 1))
	{
		return (_helper(s + 1, len - 2));
	}
	else
		return (0);
}
