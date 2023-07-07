#include "lists.h"
/**
 * reverse_listint - revarse the list
 * @head:list
 * Return:address of first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *before_node, *next_node;

	if (!head)
		return (NULL);

	before_node = NULL;
	while (*head)
	{
		next_node = (*head)->next;
		(*head)->next = before_node;
		before_node = *head;
		*head = next_node;
	}
	*head = before_node;
	return (*head);
}
