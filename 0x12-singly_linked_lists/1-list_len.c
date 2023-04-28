#include "lists.h"

/**
 * list_len - check code
 * @h: points to the first element (head)
 * Description: a fumction to return the number of elements in
 * a linked list.
 * Return: thee number of elements
 */

size_t list_len(const list_t *h)
{
	unsigned int numElemt = 0;

	while (h)
	{
		numElemt++;
		h = h->next;
	}
	return (numElemt);
}
