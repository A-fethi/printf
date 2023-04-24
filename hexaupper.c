#include "main.h"

/**
 * _hexaupper - convert num to hex upper
 * @num: the number
 * @len: length of the resulting string
 */

void	_hexaupper(unsigned long num, int *len)
{
	char	*hex;

	hex = "0123456789ABCDEF";
	if (num > 15)
		_hexaupper(num / 16, len);
	_putchar(hex[num % 16]);
	(*len)++;
}
