#include "lists.h"

/**
 * free_listint2 - check code
 * @head: pointer to the first element
 * Description: function that frees a linked list
 * Return: Nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *tempList;

	if (head == NULL)
		return;

	tempList = *head;

	while (*head)
	{
		tempList = (*head);
		(*head) = (*head)->next;

		free(tempList);
	}

	(*head) = NULL;
}
