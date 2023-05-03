#include "lists.h"

/**
 * get_nodeint_at_index - check code
 * @head: first element in the list
 * @index: index of the  node
 * Description: a function that returns the nth
 * node of a linked list
 * Return: the address of the the new node or NULL,
 * if otherwise
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indexx = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (indexx == index)
			return (head);

		head = head->next;
		indexx++;

	}

	return (NULL);
}
