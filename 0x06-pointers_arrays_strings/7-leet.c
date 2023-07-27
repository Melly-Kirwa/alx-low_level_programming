#include "main.h"

/**
 * *leet - takes a string of input and performs 1337 encoding
 * @str: input string to be encoded.
 * Return: pointer to the encoded string
 */

char *leet(char *str)
{
	int i, j;
	int rep_upp[] = {65, 69, 79, 84, 76};
	int rep_low[] = {97, 101, 111, 116, 108};
	int rep_int[] = {52, 51, 48, 55, 49};

	i = 0;
	while ( str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == rep_upp[j] || str[i] == rep_low[j])
			{
				str[i] = rep_int[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
