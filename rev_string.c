#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * rev_string - Reverse a string
 * @s: Our string
 *
 * Return: reversed string
 */
char *rev_string(char *s)
{
	int i = 0, len = 0;
	char tmp = 0;

	if (s == NULL)
		return (-1);
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	len--;

	_printf("%d", len);
	for (i = 0; i <= len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - i] = tmp;
	}

	return (s);
}

