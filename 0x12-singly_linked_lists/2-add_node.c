#include "lists.h"
#include <string.h>

/**
 * add_node - adds a node
 * @head: pointer to the first node
 * @str: string literal
 * Description: function to add a new node at the head
 * Return: the address of the added node, NULL if faailed.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *tempList;
	int lenn = 0;

	tempList = malloc(sizeof(list_t));
	if (tempList == NULL)
		return (NULL);

	while (str[lenn])
		lenn++;

	tempList->len = lenn;
	tempList->str = strdup(str);
	tempList->next = *head;
	*head = tempList;

	return (tempList);
}
