#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup -  function returns a pointer to a new string which is a duplicate of
 *            the string str.
 * @str: pointer to duplicate string in memory
 * Return: a pointer to the duplicated string, or NULL otherwise
 */

char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		len++;
	}
	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[len] = '\0';

	return (duplicate);
}
