#include "main.h"

/**
 * _isalpha - check main.
 * @c: An input character.
 * Description: function to check for alphabetic
 * characters.
 * Return: 1 or 0 otherwise.
 */

int _isalpha(int c)
{
	char alpha;
	char up_alpha;
	int i = 0;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		for (up_alpha = 'A'; up_alpha <= 'Z'; up_alpha++)
		{
			if (c == alpha || c == up_alpha)
				i = 1;
		}
	}
	return (i);
}
