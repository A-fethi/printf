#include "main.h"

/**
 * char_to_upper_hex - convert num to hex lower
 * @num: the number
 * @len: pointer to the string length
 *
 * Return: 0 on succes, -1 on error
 */
int	char_to_upper_hex(int num, int *len)
{
	int i, size = 2;
	char *hex;
	char *up = "0123456789ABCDEF";

	hex = malloc(size * sizeof(char));
	if (!hex || !up)
	{
		free(hex);
		exit(-1);
	}

	if (num < 16)
	{
		*len += _printf("0%c", up[num]);
		return (0);
	}
	else
	{
		for (i = 0; num != 0; i++)
		{
			hex[i] = up[num % 16];
			hex = _realloc(hex, size * sizeof(char), (size + 1) * sizeof(char));
			size++;
			num /= 16;
		}
	}
	hex[i] = '\0';
	*len += _putchar(hex[i - 1]);
	*len += _putchar(hex[i - 2]);
	free(hex);
	return (0);
}

/**
 * _non_printable - prints a string with _non_printable charaterss
 * @s: our string
 *
 * Return: actual string length
 */
int	_non_printable(char *s)
{
	int len, i;
	int c;

	len = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c > 0 && c < 32) || c >= 127)
		{
			len += _printf("\\x");
			char_to_upper_hex(c, &len);
		}
		else
		{
			_putchar(c);
			len++;
		}
	}
	return (len);
}
