#include "main.h"

/**
 * wildcmp - check code
 * @s1: first string
 * @s2: second string
 * Description: compares two string
 * Return: 1 if the strings are identical.
 */
int wildcmp(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	if (*s2 == '*')
	{
		if (!*s1 && *(s2 + 1))
			return (0);

		if (wildcmp(s1, s2 + 1) || (*s1 && wildcmp(s1 + 1, s2)))
			return (1);

		return (0);
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
