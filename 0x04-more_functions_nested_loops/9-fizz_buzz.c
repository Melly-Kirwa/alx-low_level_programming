#include <stdio.h>

/**
 * main - prints our 1-100 and replaces multiples of 3 with Fizz and for
 *        multiples of 5 print Buzz, for multiples of both 3 and 5 print
 *        FizzBuzz
 * Return: Always 0
 */

int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3) == 0)
			printf("Fizz ");
		else if ((x % 5) == 0)
			printf("Buzz ");
		else if (((x % 3) == 0) && ((x % 5) == 0))
			printf("FizzBuzz ");
		else
			printf("%d ", x);
	}
	printf("\n");
	return (0);
}
