#include "main.h"

/**
 * print_line - print _ n times
 * @n: character to check
 * Return: void
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		_putchar(95);
	}
	_putchar('\n');
}
