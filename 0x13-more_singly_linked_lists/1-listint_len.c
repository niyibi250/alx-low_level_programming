#include "lists.h"

/**
 * listint_len - find number of elements
 * @h:list
 * Return:number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *new = h;
	size_t i = 0;

	while (new)
	{
		i++;
		new = new->next;
	}

	return (i);
}
