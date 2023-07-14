#include <stdio.h>

/**
 * main - prints base 16 numbers
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char l;

	for (x = 0; x < 10; x++)
	{
		putchar('0' + x);
	}
	for (l = 'a'; l < 'g'; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
