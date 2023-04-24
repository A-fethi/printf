#include "main.h"

/**
 * char_to_upper_hex - convert num to hex lower
 * @num: the number
 * @len: pointer to the string length
 */
void	char_to_upper_hex(int num, int *len)
{
	int i, size = 2;
	char *hex;
	char *up = "0123456789ABCDEF";

	hex = malloc(size * sizeof(char));

	if (num < 16)
	{
		*len += _printf("0%c", up[num]);
		return;
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
	rev_string(hex);
	*len += _putchar(hex[0]);
	*len += _putchar(hex[1]);
	free(hex);
}

/**
 * _non_printable - prints a sing with _non_printable charaterss
 * @s: our sing
 * @len: pointer to the sing length
 *
 * Return: actual sing length
 */
int	_non_printable(char *s)
{
	int len;
	int c;

	len = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (s[len])
	{
		c = s[len];
		if ((c > 0 && c < 32) || c >= 127)
		{
			len += _printf("\\x");
			char_to_upper_hex(c, &len);
		}
		else
		{
			write(1, &s[len], 1);
			len++;
		}
	}
	return (len);
}
