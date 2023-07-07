#include "lists.h"
/**
 * print_listint_safe - print list
 * @head:lists
 * Return:number of node
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *aux_node = head;

	if (!head)
		exit(98);

	while (aux_node)
	{
		printf("[%p] %i\n", (void *)aux_node, aux_node->n);
		aux_node = aux_node->next;
		i++;
	}
	return (i);
}
