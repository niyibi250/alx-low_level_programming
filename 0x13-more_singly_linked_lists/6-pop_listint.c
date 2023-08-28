#include "lists.h"
/**
 * pop_listint - delete node
 * @head:list
 * Return:head node’s data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	data = (*head)->n;
	*head = first_node->next;
	free(first_node);
	return (data);
}
