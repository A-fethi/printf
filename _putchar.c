#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1, -1 on error.
 */

int	_putchar(char c)
{
	if (c == '\0')
	{
		write(1, "", 1);
		return (1);
	}
	return (write(1, &c, 1));
}

