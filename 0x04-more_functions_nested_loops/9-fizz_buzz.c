#include <stdio.h>

/**
 * main - prints our 1-100 and
 * replaces multiples of 3 with Fizz
 * replaces multiples of 5 print Buzz
 * replaces multiples of both 3 and 5 with FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else if (x % 5 == 0)
			printf("Buzz");
		else
			printf("%d", x);

		if (x < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
