#include "main.h"

/**
 * *cap_string - capitalize the first letter(s) of a word(s) in a string
 * @str: string to check and capitalize
 * Return: pointer to the capitalized string
 */

char *cap_string(char *str)
{
	int i, j;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (str[i] == sep_words[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
				break;
			}
       		}
		i++;
	}
	return (str);
}
