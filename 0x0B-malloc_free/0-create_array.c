#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array
 * @size: size of array
 * @c: character
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *first;
	unsigned int i;

	if (size <= 0)
		return (NULL);

	first = malloc(size);
	if (first == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		first[i] = c;

	return (first);
}
