#include "lists.h"

/**
 * pop_listint - check code
 * @head: pointer to the first element
 * Description: function that deletes the head of a linked list
 * Return: Nothing.
 */

int pop_listint(listint_t **head)
{
	listint_t *newHead;
	int i = 0;

	if (*head != NULL)
	{
		newHead = (*head)->next;
		i = (*head)->i;
		free(*head);

		(*head) = newHead;
	}

	return (i);
}
