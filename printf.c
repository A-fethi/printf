#include "main.h"

/**
 * _printf - Prints formatted string
 * @format: the formatted string
 *
 * Return: string length
 */
int _printf(const char *format, ...)
{
	int i, len = 0;
	va_list args;

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == 'd' || format[i] == 'i')
			{
				print_number(va_arg(args, int), &len);
			}
			else
			{
			specifier_check(format[i], args, &len);
			}
		}
		else
		{
			_putchar(format[i], &len);
		}
	}

	va_end(args);
	return (len);
}

