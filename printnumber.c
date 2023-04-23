#include "main.h"

int	print_num(long n, int *len)
{
	if (n < 0)
	{
		_putchar('-');
		(*len)++;
		n = -n;
	}
	if (n < 10)
	{
		_putchar(n + '0');
		(*len)++;
	}
	else
	{
		print_num(n / 10, len);
		print_num(n % 10, len);
	}
}
