#include "main.h"

/**
 * flags - check flags
 * @type: specifier
 * @len: string lenght
 *
 * Return: 1 if puts something, 0 if not
 */
int	flags(const char *type, int *len)
{
	if (*type == ' ')
	{
		*len += _putchar(' ');
		return (1);
	}
	else if (*type == '+')
	{
		*len += _putchar('+');
		return (1);
	}
	else if (*type == '#')
	{
		if (*(type + 1) == 'o')
			*len = _putchar('0');
		if (*(type + 1) == 'x' || *(type + 1) == 'X')
			*len = _printf("0x");
		return (1);
	}
	return (0);
}
/**
 * non_custom_specifiers- check non custom specifiers
 * @args: argument list
 * @type: specifier
 * @len: string lenght
 */
void	non_custom_specifiers(va_list args, char type, int *len)
{
	if (type == 'b')
		print_binary(va_arg(args, int), len);
	else if (type == 'S')
		*len += _non_printable(va_arg(args, char *));
	else if (type == 'r')
		*len += print_rev(va_arg(args, char *));
	else if (type == 'R')
		*len += rot13(va_arg(args, char *));
	else
	{
		(*len) = (*len) + _putchar('%');
		(*len) = (*len) + _putchar(type);
	}
}

/**
 * custom_specifiers - checks custom specifiers
 * @args: arguments líst
 * @type: specifier
 * @len: string length
 */
void	custom_specifiers(va_list args, char type, int *len)
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
	else if (type == 'o')
		(*len) = (*len) + _octal(va_arg(args, int));
	else if (type == 'x')
		_hexalower(va_arg(args, unsigned int), len);
	else if (type == 'X')
		_hexaupper(va_arg(args, unsigned int), len);
	else if (type == 'u')
		_unsigned(va_arg(args, unsigned int), len);
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
		non_custom_specifiers(args, type, &*len);
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
			if (flags(&format[i], &len))
				i++;
			custom_specifiers(args, format[i], &len);
		}
		else
			len = len + _putchar(format[i]);
		i++;
	}
	va_end(args);
	return (len);
}
