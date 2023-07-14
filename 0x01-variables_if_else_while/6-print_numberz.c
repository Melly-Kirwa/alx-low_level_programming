#include <stdio.h>

/**
 * main - Prints numbers 0-9 using putchar
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int a = 0;

	while (a < 10)
	{
		putchar('0' + a);
		a++;
	}
	putchar('\n');
	return (0);
}
