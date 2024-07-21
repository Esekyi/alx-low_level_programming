#include "search_algos.h"
#include <stdio.h>

/**
 * binary_search - check code
 * @array: pointer to the first element
 * @size: size of the whole elements
 * @value: value to find in array
 * Description: search for value in a sorted array
 * Return: the index of value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1, mid;

	if (array == NULL)
	{
		return (-1);
	}
	while (left <= right)
	{
		printf("Searching in array: ");
		for (size_t i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
			{
				printf(", ");
			}
		}
		printf("\n");
		mid = left + (right - left) / 2;

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
			right = mid - 1;
	}

	return (-1);
}
