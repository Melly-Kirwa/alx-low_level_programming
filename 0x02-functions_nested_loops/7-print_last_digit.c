#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @i: number to check
 * Return: 0
 */
int print_last_digit(int i)
{
	int j;

	if (i < 0)
	{
		i *= -1;
	}
	j = i % 10;
	_putchar (j + '0');

	return (j);
}
