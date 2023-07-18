#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @i: number to check
 * Return: 0
 */
int print_last_digit(int i)
{
	if (i < 0)
		i *= -1;

       	_putchar('0' + (i % 10));

	return (i % 10);
}
