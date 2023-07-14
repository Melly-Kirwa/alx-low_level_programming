#include <stdio.h>

/**
 * main - Prints the alphabet except q and e
 *
 * Returns: Always 0 (Success)
 */
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		if ((x != 4) && (x != 16))
		{
			putchar(alp[x]);
		}
	}
	putchar('\n');
	return (0);
}
