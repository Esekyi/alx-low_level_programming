#include <stdlib.h>

/**
 * int_index - a function that searches for an integer.
 * @array: poimter to aray
 * @size: Size of array
 * @cmp: compare function to compare the elements
 * Return: The index
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
