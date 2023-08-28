#include "lists.h"
/**
 * print_listint_safe - print list
 * @head:lists
 * Return:number of node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *before_node = head;

	if (!head)
		exit(98);

	while (before_node)
	{
		printf("[%p] %i\n", (void *)before_node, before_node->n);
		before_node = before_node->next;
		i++;
	}
	return (i);
}
