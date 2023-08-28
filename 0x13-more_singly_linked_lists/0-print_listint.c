#include "lists.h"

/**
 * print_listint - print elements
 * @h:list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *new = h;
	size_t i = 0;

	while (new)
	{
		printf("%i\n", new->n);
		i++;
		new = new->next;
	}

	return (i);
}
