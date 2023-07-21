#include <stdio.h>

/**
 * main - find and prints the largest prime number
 * Return: Always 0
 */

int main(void)
{
	long int num, factor;
	num = 612852475143;

	for (factor = 2; factor <= num; factor++)
	{
		if (num % factor == 0)
		{
			num /= factor;
			factor--;
		}
	}
	printf("%ld\n", factor);
	return (0);
}
