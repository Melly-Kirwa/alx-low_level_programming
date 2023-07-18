#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout
 * @c: The character to print
 *
 * Return: On success 1
 * -1 is return on error, and errno is set accordingly
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
