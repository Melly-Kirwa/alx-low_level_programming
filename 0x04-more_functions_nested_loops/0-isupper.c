#include "main.h"

/**
 * _isupper - Determines whether a number is uppercase or lowercase
 * @c: character to check
 * Return: 1 if character is uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}