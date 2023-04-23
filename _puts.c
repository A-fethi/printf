#include "main.h"

/**
 * _puts - Print a string
 * @str: Our string
 *
 * Return: string length
 */

int	_puts(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}
