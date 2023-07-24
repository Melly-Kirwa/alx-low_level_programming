#include "main.h"

/**
 * swap_int - swaps two intergerrs
 * @a: first pointer to swap
 * @b: second pointer
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
