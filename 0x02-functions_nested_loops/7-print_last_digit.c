#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @i: number to check
 * Return: 0
 */
int print_last_digit(int i)
{
	int m;

	if (i < 0)
	{
		i *= -1;
	}
	m = i % 10;
	_putchar('0' + m);

	return (m);
}
