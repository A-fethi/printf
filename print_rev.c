#include "main.h"

/**
 * print_rev - Print a reversed string
 * @s: Our string
 *
 * Return: string length.
 */
int print_rev(char *s)
{
	int i, len = 0, length;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	length = len;
	while (len >= 1)
	{
		_putchar(s[len - 1]);
		len -= 1;
	}

	return (length);
}

