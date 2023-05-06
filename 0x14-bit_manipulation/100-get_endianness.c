#include "main.h"

/**
 * get_endianness - check code
 * Description: function that checks the endianness
 * Return: o if big and 1 if red
 */

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;
	return (*ptr == 1);
}
