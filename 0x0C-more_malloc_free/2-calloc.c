#include "main.h"
#include <stdlib.h>

/**
 * _calloc - locate array, using malloc
 * @nmemb: elements pf arreys
 * @size: size of arrey
 * Return: memory.
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, final = nmemb * size;
	char *arr;

	if (final == 0)
		return (NULL);

	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < final; i++)
		arr[i] = 0;
	return (arr);
}
