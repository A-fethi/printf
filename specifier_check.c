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
			_putchar(va_arg(args, int));
			(*len)++;
			break;
		case 's':
			*len += _puts(va_arg(args, char *));
			break;
		case '%':
			_putchar('%');
			(*len)++;
			break;
		case ('d'):
			_putchar((va_arg(args, int)) + '0');
			(*len)++;
			break;
		case ('i'):
			_putchar((va_arg(args, int)) + '0');
			(*len)++;
			break;
		default:
			_putchar('%');
			_putchar(spec);
			*len += 2;
			break;
	}
}
