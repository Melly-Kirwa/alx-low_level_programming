#include <stdio.h>

/**
 * main - prints alphabet in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	
	for (i ='z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
