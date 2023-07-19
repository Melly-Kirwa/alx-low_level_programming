#include "main.h"

/**
 * print_times_table - prints an nxn table
 * @n: character to check
 * Return: 0
 */
void print_times_table(int n)
{
	int row;
	int col;
	int prod;

	if (n > 0 && n < 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				prod = (row * col);

				if (col == 0)
				{
					_putchar('0' + prod);
				}
				else if (prod <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + prod);
				}
				else if (prod > 9 && prod < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (prod / 10));
					_putchar('0' + (prod % 10));
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10) % 10) + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
