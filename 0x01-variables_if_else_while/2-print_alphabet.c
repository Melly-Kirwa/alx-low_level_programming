#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26 ; x++)
	{
		putchar(alphabet[x]);
	}
	putchar('\n');
	return (0);
}
