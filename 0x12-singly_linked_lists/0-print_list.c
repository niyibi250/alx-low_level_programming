#include <stdio.h>
#include "lists.h"

/**
 * print_list - print list
 * @h: list to print
 * Return: return number of element printed
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		n++;
	}
	return (n);
}
