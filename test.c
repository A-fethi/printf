#include <unistd.h>

void	_putchar(char c, int *len)
{
	write (1, &c, 1);
	(*len)++;
}


int _puts(char *str)
{
	int i, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		len++;
	}
	return (len);
}

int _printf(const char *format, ...)
{
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
		}
		else
			putchar(format[i]);
			.
			.
			.
}
