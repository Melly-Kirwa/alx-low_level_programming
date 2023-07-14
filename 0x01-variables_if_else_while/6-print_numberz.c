#include <stdio.h>

/**
 * main - Prints numbers 0-9 using putchar
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	do
	{
		putchar('0' + a);
		a = a + 1;
	}while (a < 10);
	putchar('\n');
	return (0);
}
