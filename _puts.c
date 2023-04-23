#include "main.h"

/**
 * _puts - Print a string
 * @str: Our string
 *
 * Return: the string length
 */

int	_puts(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
	return (len);
}
