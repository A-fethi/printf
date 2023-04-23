#include "main.h"

/**
 * _if - ...
 * @args: ...
 * @type: ...
 * @len: ...
 */

void	_if(va_list args, char type, int *len)
{
	if (type == 'c')
		(*len) = (*len) + _putchar(va_arg(args, int));
	else if (type == 's')
		(*len) = (*len) + _puts(va_arg(args, char *));
	else if (type == 'd' || type == 'i')
		print_num(va_arg(args, int), len);
}

/**
 * _printf - ...
 * @format: ...
 * Return: ...
 */

int	_printf(const char *format, ...)
{
	int	i;
	int	len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				len++;
			}
			_if(args, format[i], &len);
		}
		else
			len = len + _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}

