#include "lists.h"

/**
 * free_list - check code
 * @head: pointer to the first element
 * Description: function that frees a linked list
 * Return: Noting.
 */

void free_list(list_t *head)
{
	list_t *tempList;

	while (head)
	{
		tempList = head;
		head = head->next;

		free(tempList->str);
		free(tempList);
	}
	free(head);
}
