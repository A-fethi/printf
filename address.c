#include "main.h"

/**
 * _address - prints address in hex format
 * @num: the number
 * @len: length of the resulting string
 */
void	_address(unsigned long num, int *len)
{
	char	*hex;

	hex = "0123456789abcdef";
	_puts("0x");
	if (num > 15)
		_hexalower(num / 16, len);
	_putchar(hex[num % 16]);
	(*len)++;
}
