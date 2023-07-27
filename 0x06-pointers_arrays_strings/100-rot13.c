#include "main.h"

/**
 * *rot13 - encodes a string using rot13 encoding scheme
 * @str: input string
 * Return: pointer to the encoded string
 */

char *rot13(char *str)
{
	int i = 0, j;
	char alp[] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char r_alp[] ={"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == alp[j])
			{
				str[i] = r_alp[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
