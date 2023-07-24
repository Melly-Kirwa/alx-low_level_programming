#include "main.h"

/**
 * puts2 - prints every character of a string
 * @str: pointer to the string
 * Return: nothing
 */

void puts2(char *str)
{
	int count = 0;

	while (count >= 0)
	{
		if (str[count] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (count % 2 == 0)
			_putchar(str[count]);
		count++;
	}
}
