#include "main.h"

/**
 * more_numbers - print numbers 1-14 ten times
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int j = 0;

	while (j < 14)
	{
		i = 0;
		while( i <= 14)
		{
			if (i > 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
			i++;
		}
		j++;
		_putchar('\n');
	}
}
