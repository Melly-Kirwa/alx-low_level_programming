#include "main.h"

/**
 * _isalpha - checks whether it is letter (uppercase or lowercase)
 * @c: charater to check
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
