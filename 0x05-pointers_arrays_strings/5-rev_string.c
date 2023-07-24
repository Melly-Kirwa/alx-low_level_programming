#include "main.h"

/**
 * _strlen - calculates the length of a string
 * @s: pointer to the string
 * Return: interger count
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

/**
 * rev_string - reverses the string
 * @s: pointer to the string
 * Return: nothing
 */

void rev_string(char *s)
{
	int x = 0;
	int y = (_strlen(s) - 1);
	char temp;

	while (x < y)
	{
		temp = s[x];
		s[x] = s[y];
		s[y] = temp;
		x++, y--;
	}
}
