#include "main.h"

/**
 * _hexalower - convert num to hex lower
 * @num: the number
 * @len: length of the resulting string
 */

void	_hexalower(unsigned long num, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (num > 15)
		_hexalower(num / 16, len);
	_putchar(hex[num % 16]);
	(*len)++;
}
