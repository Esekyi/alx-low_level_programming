#include "lists.h"
#include <string.h>

/**
 * _stringlen - check code
 * @s: string
 * Description: counts a string
 * Return: length of string s
 */

int _stringlen(const char *s)
{
	int count = 0;

	while (*s)
	{
		s++;
		count++;
	}
	return (count);
}


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

	if (head != NULL && str != NULL)
	{
		tempList = malloc(sizeof(list_t));
		if (tempList == NULL)
			return (NULL);

		tempList->str = strdup(str);
		tempList->len = _stringlen(str);
		tempList->next = *head;
		*head = tempList;

		return (tempList);
	}
	return (0);
}
