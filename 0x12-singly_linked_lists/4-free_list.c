#include "lists.h"

/**
 * free_list - free list
 * head:list
 * return: nothing
 */

void free_list(list_t *head)
{
	list_t *hold;

	while (head)
	{
		hold = head->next;
		free(head->str);
		free(head);
		head = hold;
	}
}
