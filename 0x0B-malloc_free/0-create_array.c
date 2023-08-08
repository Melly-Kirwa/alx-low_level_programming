#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array of character and initializes it with a specific char
 * @size:size of memory to print
 * @c: character to print
 * Return: pointer to the array, or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *init;
	unsigned int i;

	if (size == 0)
		return (NULL);

	init = malloc(sizeof(c) * size);

	if (init == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		init[i] = c;

	return (init);
}
