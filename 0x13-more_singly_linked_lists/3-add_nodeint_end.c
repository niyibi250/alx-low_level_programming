#include "lists.h"
/**
 * add_nodeint_end - ad node at end
 * @head:list
 * @n:element to add
 * Return:address of element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *old = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (old)
	{
		while (old->next)
			old = old->next;
		old->next = new;
	}
	else
		*head = new;

	return (new);
}
