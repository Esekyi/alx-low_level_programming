#include "lists.h"

/**
 * delete_nodeint_at_index - check code below
 * @head: first node
 * @index: index of the list
 * Description: function that deletes a new node at an index
 * Return: the address of the new node, or NULL if otherwise.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newNode, *tempList;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	newNode = *head;

	if (index == 0)
	{
		*head = (*head)->next;
		free(newNode);
	}
	else
	{
		while (i < index)
		{
			newNode = newNode->next;
			if (newNode == NULL)
				return (-1);
			i++;
		}

		tempList = newNode;
		tempList = tempList->next;
		newNode->next = tempList->next;

		free(tempList);
	}

	return (1);
}
