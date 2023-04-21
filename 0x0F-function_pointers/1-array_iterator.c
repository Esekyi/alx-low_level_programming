#include <stdlib.h>

/**
 * array_iterator - check code
 * @array: An array
 * @size: number of element of aray
 * @action: a function
 * Description: a function that executes a function given as,
 * parameter on each element of an array.
 * Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int iterate = 0;

	if (action == NULL || array == NULL)
		return;

	for (; iterate < size; iterate++)
		action(array[iterate]);
}
