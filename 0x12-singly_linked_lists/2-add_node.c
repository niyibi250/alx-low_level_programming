#include "lists.h"

/**
 * add_node - add new node
 * @head:first pointer
 * @str:string
 * Return: address of element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newly;
	unsigned int length = 0;

	while (str[length])
		length++;

	newly = malloc(sizeof(list_t));
	if (!newly)
		return (NULL);

	newly->str = strdup(str);
	newly->len = length;
	newly->next = (*head);
	(*head) = newly;

	return (*head);
}
