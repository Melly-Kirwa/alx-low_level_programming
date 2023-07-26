#include "main.h"

/**
 * _strncpy - copy string
 * @src: pointer to source
 * @dest: pointer to destination of characters
 * @n: number of characters to copy
 * Return: pointer to destinatiom
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
