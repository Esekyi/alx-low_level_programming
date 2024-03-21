#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - check code
 * @h: head of the doubly linked list
 * Description: function to return the length  of a doubly linked list int
 * Return: interger (length of elements)
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current != NULL)
	{
		len++;
		current = current->next;
	}
	return (len);
}
