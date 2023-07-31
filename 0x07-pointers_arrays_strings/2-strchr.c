#include "main.h"

/**
 * _strchr - locates a character on the string
 * @s: string to check
 * @c: character to check
 * Return: pointer to the first occurence of the character checked
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return ('\0');
}
