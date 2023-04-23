#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to write
 * @len: lenght of charcter
 */
int	_putchar(char c)
{
	return (write(1, &c, 1));
}

