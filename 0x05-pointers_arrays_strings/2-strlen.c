#include "main.h"

/**
 * _strlen - evaluates the length of a string
 * @s: string to check
 * Return: Always 0
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
