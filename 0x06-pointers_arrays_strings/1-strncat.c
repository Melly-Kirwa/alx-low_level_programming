#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: final string after concatenation
 * @src: source string
 * @n: number of characters to use
 * Return: pointer to the resulting tring
 */

char *_strncat(char *dest, char *src, int n)
{
	int m = 0;
	int i;

	while (dest[m] != '\0')
	{
		m++;
		}

	i = 0;
	while (i < n)
	{
		dest[m] = src[i];
		if (src[i] == '\0')
		{
			break;
		}
		m++;
		i++;
	}
	return (dest);
}
