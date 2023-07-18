#include "main.h"

/**
 * _abs - computes the absolute value of a number
 * @i: number to compute
 * Return: 0
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-i);
	}
	else
	{
		return (i);
	}
	_putchar('\n');
	return (0);
}
