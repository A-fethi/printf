#include "main.h"

/**
 * specifier_check - check specifier and print adequate formatted token
 * @spec: specifier
 *
 * Return: void
 */
void specifier_check(char spec, va_list args, int *len)
{
	switch (spec)
	{
		case 'c':
			_putchar(va_arg(args, int), len);
			break;
		case 's':
			_puts(va_arg(args, char *), len);
			break;
		case '%':
			_putchar('%', len);
			break;
		default:
			_putchar('%', len);
			_putchar(spec, len);
			break;
	}
}
