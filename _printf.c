#include "main.h"

/**
 * _if - checks specifiers
 * @args: arguments líst
 * @type: specifier
 * @len: string length
 *
 * Return: void
 */

void	_if(va_list args, char type, int *len)
{
	if (type == '%')
	{
		_putchar('%');
		(*len)++;
	}
	else if (type == 'c')
		(*len) = (*len) + _putchar(va_arg(args, int));
	else if (type == 's')
		(*len) = (*len) + _puts(va_arg(args, char *));
	else
	{
		(*len) = (*len) + _putchar('%');
		(*len) = (*len) + _putchar(type);
	}
}

/**
 * _printf - print formatted string
 * @format: the formatted string
 *
 * Return: the string length
 */

int	_printf(const char *format, ...)
{
	int	i;
	int	len;
	va_list	args;

	i = 0;
	len = 0;
	if (format == NULL)
		return (-1);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			_if(args, format[i], &len);
		}
		else
			len = len + _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}

