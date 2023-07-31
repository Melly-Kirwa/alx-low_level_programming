#include "main.h"
#define NULL 0

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: objects to match
 * Return: pointer to index of string at first occurrence
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0') /*iterate through string*/
	{

		for (j = 0; accept[j] != '\0'; j++) /* iterate through target */
		{
			if (s[i] == accept[j]) /* stop at first match */
			{
				s = &s[i]; /* set pointer to first occurence */
				return (s);
			}
		}
		i++;
	}
	return (NULL); /* return NULL if no matches */

}
