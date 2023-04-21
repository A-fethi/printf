#include "main.h"

/**
 * _puts - Print a string
 * @str: Our string
 *
 * Return: string length
 */
int _puts(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}

