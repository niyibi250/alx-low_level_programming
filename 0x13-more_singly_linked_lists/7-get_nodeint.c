#include "lists.h"
/**
 * get_nodeint_at_index - reeturn specified  node number
 * @head:list
 * @index:number of node specied
 * Return:specied node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int i = 0;

	while (node && i != index)
	{
		i++;
		node = node->next;
	}
	if (node && i == index)
		return (node);
	return (NULL);
}
