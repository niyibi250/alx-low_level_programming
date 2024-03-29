#include "main.h"
#include <stdlib.h>

unsigned int _strlen(char *s);

/**
 * string_nconcat - connect two strings
 * @s1: first argument string
 * @s2: second arguments string.
 * @n: numbers of characters from second string argument
 * Return: new string.
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j, s1_len, s2_len;
	char *aux;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);

	if (n < s2_len + 1)
		aux = malloc(sizeof(char) * (s1_len + n + 1));
	else
		aux = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (aux == NULL)
		return (NULL);

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			aux[i] = s1[i];
	if (s2 != NULL)
	{
		if (n < s2_len)
			for (j = 0; j < n; j++, i++)
				aux[i] = s2[j];
		else
			for (j = 0; s2[j] != '\0'; j++, i++)
				aux[i] = s2[j];
	}
	aux[i] = '\0';
	return (aux);
}

/**
 * _strlen -  length of a string.
 * @s: string.
 * Return: Length .
 */
unsigned int _strlen(char *s)
{
	unsigned int i = 0;
	unsigned int cont = 0;

	if (s == NULL)
		return (0);
	while (s[i] != '\0')
	{
		cont++;
		i++;
	}
	return (cont);
}
