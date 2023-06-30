#include "lists.h"

/**
 * add_node_end - add element to end
 * head:list
 * str:string
 * return: return address
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newly;
	list_t *hold = *head;
	unsigned int lenght = 0;

	while (str[lenght])
		lenght++;

	newly = malloc(sizeof(list_t));
	if (!newly)
		return (NULL);

	newly->str = strdup(str);
	newly->len = lenght;
	newly->next = NULL;

	if (*head == NULL)
	{
		*head = newly;
		return (newly);
	}

	while (hold->next)
		hold = hold->next;

	hold->next = newly;

	return (newly);
}
