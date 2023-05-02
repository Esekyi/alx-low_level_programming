#include "lists.h"

/**
 * listint_len - check code
 * @h: points to the first element (head)
 * Description: a fumction to return the number of elements in
 * a linked list.
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int numElemt = 0;

	while (h)
	{
		numElemt++;
		h = h->next;
	}
	return (numElemt);
}
