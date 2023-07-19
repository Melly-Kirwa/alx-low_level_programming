#include <stdio.h>

/**
 * main - print first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	int count;
	unsigned long f1 = 0, f2 = 1, sum;
	unsigned long f11, f12, f21, f22;
	unsigned long part1, part2;

	for (count = 0; count < 92; count++)
	{
		sum = f1 + f2;
		printf("%lu, ", sum);

		f1 = f2;
		f2 = sum;
	}

	f11 = f1 / 10000000000;
	f21 = f2 / 10000000000;
	f12 = f1 % 10000000000;
	f22 = f2 % 10000000000;

	for (count = 93; count < 99; count++)
	{
		part1 = f11 + f21;
		part2 = f12 + f22;
		if (f12 + f22 > 9999999999)
		{
			part1 += 1;
			part2 %= 10000000000;
		}

		printf("%lu%lu", part1, part2);
		if (count != 98)
			printf(", ");

		f11 = f21;
		f12 = f22;
		f21 = part1;
		f22 = part2;
	}
	printf("\n");
	return (0);
}
