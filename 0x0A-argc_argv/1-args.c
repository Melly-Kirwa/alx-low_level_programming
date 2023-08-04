#include "main.h"
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: argument counter
 * @argv: array of arguments
 * Return: 0 Always (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;
	int count = -1;

	for (i = 0; i < argc; i++)
	{
		count++;
	}
	printf("%d\n", count);
	return (0);
}
