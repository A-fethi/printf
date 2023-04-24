#include "main.h"

/**
 * rev_string - Reverse a string
 * @s: Our string
 *
 * Return: reversed string.
 */

int	rev_string(char *s)
{
	int i, len = 0;
	int tmp = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	i = 0;
	len--;

	while (i <= len / 2)
	{
		tmp = s[i];
		s[i] = s[len - i];
		s[len - i] = tmp;
		i++;
	}
	_putchar('%');
	_putchar('r');
	return (len);
}
