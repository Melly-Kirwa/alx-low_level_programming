#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints last digit of a number
 * @i: number to check
 * Return: 0
 */
int print_last_digit(int i)
{
	int j;

	j = _abs(i) % 10;
	_putchar (j + '0');

	return (j);
}
