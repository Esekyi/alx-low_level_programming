#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a node to the tail
 * @head: pointer to the first node
 * @str: string literal
 * Description: function to add a new node at the tail
 * Return: the address of the added node, NULL if faailed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tempList, *newNode;
	int lenn = 0;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	while (str[lenn])
		lenn++;

	newNode->len = lenn;
	newNode->str = strdup(str);

	if (*head == NULL)
	{
		newNode->next = *head;
		*head = newNode;
	}
	else
	{
		newNode->next = NULL;
		tempList = *head;

		while (tempList->next)
			tempList = tempList->next;
		tempList->next = newNode;
	}

	return (newNode);
}
