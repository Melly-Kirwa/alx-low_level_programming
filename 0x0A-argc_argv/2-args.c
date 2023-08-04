#include "main.h"
#include <stdio.h>

/**
 * main - prints all argumenys it receives
 * @argc: count of arguments
 * @argv: array of arguments
 * Return: 0 Always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
