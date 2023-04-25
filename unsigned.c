#include "main.h"

/**
 * _unsigned - prints a number
 * @n: our number
 * @len: pointer to the string length
 */

void	_unsigned(unsigned int n, int *len)
{
	int d = 1000000000, l = 0;

	while (l == 0 && n > 0)
	{
		l = (n / d) % 10;
		d /= 10;
	}

	while (d > 0 && n > 0)
	{
		_putchar(l + '0');
		(*len)++;
		l = (n / d) % 10;
		d /= 10;
	}
	_putchar(n % 10 + '0');
	(*len)++;
}
