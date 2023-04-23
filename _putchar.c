#include <unistd.h>

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to write
 *
 * Return: void.
 */
void _putchar(char c)
{
	write(1, &c, 1);
}

