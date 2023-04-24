#include "main.h"

/**
 * ft_if - check specifiers
 * @args: argument list
 * @type: specifier
 * @len: string lenght
 */

void	ft_if(va_list args, char type, int *len)
{
	if (type == 'x')
		_hexalower(va_arg(args, unsigned int), len);
	else if (type == 'X')
		_hexaupper(va_arg(args, unsigned int), len);
	else if (type == 'u')
		_unsigned(va_arg(args, unsigned int), len);
	else if (type == 'S')
		*len += _non_printable(va_arg(args, char *));
	else if (type == 'p')
	{
		void *p = va_arg(args, void *);

		if (!p)
			*len += _puts("(nil)");
		else
		{
			(*len) += _puts("0x");
			_hexalower((unsigned long)p, len);
		}
	}
	else
	{
		(*len) = (*len) + _putchar('%');
		(*len) = (*len) + _putchar(type);
	}
}

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
	else if (type == 'd' || type == 'i')
		print_num(va_arg(args, int), len);
	else if (type == 'b')
		print_binary(va_arg(args, int), len);
	else if (type == 'o')
		(*len) = (*len) + _octal(va_arg(args, int));
	else
		ft_if(args, type, &*len);
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
	if (!format || (format[0] == '%' && !format[1]))
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
