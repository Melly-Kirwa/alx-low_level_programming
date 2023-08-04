#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the result of multiplication
 * @argc: counter of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 otherwise
 */

int main(int argc, char *argv[])
{
	int mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);

	return (0);
}
