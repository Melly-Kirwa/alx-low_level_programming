#include <stdio.h>

/**
 * main - prints alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower[26] = "abcdefghijklmnopqrstuvwxyz";
	char upper[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(lower[x]);
	}
	for (x = 0; x < 26; x++)
	{
		putchar(upper[x]);
	}
	putchar('\n');
	return (0);
}
