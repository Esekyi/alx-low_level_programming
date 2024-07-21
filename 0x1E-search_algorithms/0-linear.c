#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - check code
 * @array: pointer to the first element
 * @size: number of the whole elements in array
 * @value: element to search for in the array
 * Description: Linear search for value in an array
 * Return: -1 if value not in array.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t iter;

	if (array == NULL)
	{
		return (-1);
	}

	for (iter = 0; iter < size; iter++)
	{
		printf("Value checked array[%lu] = [%d]\n", iter, array[iter]);
		if (array[iter] == value)
		{
			return (iter);
		}
	}
	return (-1);
}
