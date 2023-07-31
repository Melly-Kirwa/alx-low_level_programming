#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src: source of data to be copied
 * @dest: destination for data to be copied
 * @n: amount of bytes to copy
 * Return: pointer to the destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n - 1; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
