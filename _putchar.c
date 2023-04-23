#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to write
 * @len: pointer to string length
 *
 * Return: void.
 */
void _putchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

