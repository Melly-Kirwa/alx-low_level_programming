#include "main.h"

/**
 * rev_string - reverses a string
 * @s: pointer toa the string
 * Return: nothing
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
