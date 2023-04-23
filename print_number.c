#include "main.h"
#include <limits.h>

/**
 * print_number - prints an integer with _putchar
 * @n: our integer
 * @len: pointer to string length
 *
 * Return: void
 */
void print_number(int n, int *len)
{
	int d = 1000000000, l = 0;

	if (n < 0 && n != INT_MIN)
	{
		_putchar('-');
		(*len)++;
		n = -n;
	}

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

	if (n != INT_MIN)
	{
		_putchar(n % 10 + '0');
		(*len)++;
	}

	if (n == INT_MIN)
	{
		_putchar('-');
		(*len)++;
		print_number((INT_MIN / 100) * -1, len);
		print_number((INT_MIN % 100) * -1, len);
	}
}

