#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - check code
 * @s1: first string
 * @s2: second string to concatenat
 * @n: n bytes
 * Description: function to concatenate two strings.
 *
 * Return: a pointer to newly created space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int j, lengt1 = 0, lengt2 = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[lengt1])
		lengt1++;

	if (s2 == NULL)
		s2 = "";
	while (s2[lengt2])
		lengt2++;

	if (n >= lengt2)
		n = lengt2;

	new = malloc(lengt1 + n + 1);
	if (new == NULL)
		return (NULL);

	for (j = 0; j < (lengt1 + n); j++)
	{
		if (j < lengt1)
			new[j] = *s1, s1++;
		else
			new[j] = *s2, s2++;
	}
	new[j] = '\0';
	return (new);
}
