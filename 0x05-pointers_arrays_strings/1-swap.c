#include "main.h"

/**
 * swap_int - check the code.
 * @a: integer pointer.
 * @b: integer pointer
 * Description: a function that swaps the values of two integers
 * Return: Nothing.
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
