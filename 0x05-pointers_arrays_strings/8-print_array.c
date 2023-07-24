#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers.
 * @a: input array.
 * @n: input n elements
 * Return: nothing.
 */
void print_array(int *a, int n)
{
	int x = 0;

	for (; x < n; x++)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
			printf(", ");
	}
	printf("\n");
}
