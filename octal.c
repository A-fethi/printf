#include "main.h"

/**
 * _octal - prints octal number
 * @num: the number
 *
 * Return: lenght of printed number, -1 if an error occurs
 */

int	_octal(unsigned int num)
{
	int		remainder;
	int		i;
	int		len;
	int		*store;
	unsigned int	temp;

	i = 0;
	len = 0;
	temp = num;
	while (temp / 8 != 0)
	{
		temp = temp / 8;
		len++;
	}
	len++;
	store = malloc(len * sizeof(int));
	if (!store)
		return (-1);
	while (i < len)
	{
		remainder = num % 8;
		store[i++] = remainder;
		num = num / 8;
	}
	i = 0;
	while (i < len / 2)
	{
		temp = store[i];
		store[i] = store[(len - i - 1)];
		store[(len - i - 1)] = temp;
		i++;
	}
	i = 0;
	while (i < len)
	{
		_putchar(store[i] + '0');
		i++;
	}
	free(store);
	return (len);
}
