#include "lists.h"

/**
 * free_listint - check code
 * @head: pointer to the first element
 * Description: function that frees a linked list
 * Return: Nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *tempList;

	while (head)
	{
		tempList = head;
		head = head->next;

		free(tempList);
	}

	free(head);
}
