#include "main.h"

/**
 * reverse_array - reverses elements of integer array
 * @a: an array of numbers
 * @n: numbers of elements to swap
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int tmp, index;
	int j = n - 1;

	for (index = j; index >= n / 2; index--)
	{
		tmp = a[j - index];
		a[j - index] = a[index];
		a[index] = tmp;
	}
}
