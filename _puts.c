#include "main.h"

/**
 * _puts - Print a string
 * @str: Our string
 * @len: string length
 *
 * Return: actual string length
 */
int _puts(char *str, int *len)
{
	int i, actual_len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i], len);
		actual_len++;
	}
	return (actual_len);
}

