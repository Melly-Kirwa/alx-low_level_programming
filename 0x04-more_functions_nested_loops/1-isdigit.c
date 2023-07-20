#include "main.h"

/**
 * _isdigit - determines if character is digit
 * @c: character to check
 * Return:  returns 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c > 47 && c < 59)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
