#include "main.h"

/**
 * _putchar - Writes the character c to stdout
 * @c: The character to write
 * @len: lenght of charcter
 */
void	_putchar(char c, int *len)
{
	write(1, &c, 1);
	(*len)++;
}

