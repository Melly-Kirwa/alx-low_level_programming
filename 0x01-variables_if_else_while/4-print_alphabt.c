#include <stdio.h>

/**
 * main - prints the alphabet except q and e
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		if ((x != 5) && (x != 17))
		{
			putchar(alp[x]);
		}
	}
	putchar('\n');
	return (0);
}
