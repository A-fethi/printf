#include "main.h"

/**
 * width - find field width
 * @type: pointer to specifier
 * @i: pointer to index
 *
 * Return: the field width
 */
int	width(const char *type, int *i)
{
	char *strnum;
	int size = 2, j;

	strnum = malloc(size * sizeof(char));
	if (!strnum)
		exit(-1);

	for (j = 0; _isdigit(*type); j++)
	{
		strnum[j] = *type;
		type++;
		strnum = _realloc(strnum, size * sizeof(char), (size + 1) * sizeof(char));
		size++;
		(*i)++;
	}
	strnum[j] = '\0';

	return (_atoi(strnum));
}

/**
 * _isalpha - Check if a character is a letter or not
 * @c: The charcter to check
 *
 * Return: 1 if a letter, and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _isdigit - Tells if a character is a digit
 * @c: Our character
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

/**
 * _atoi - Convert string to integer
 * @s: The string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int n = 0, d = 1, i = 0, m = 1;

	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			m *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
		i++;

	i--;

	while (s[i] >= '0' && s[i] <= '9')
	{
		n += (s[i] - '0') * d;
		if (d == 100000000)
			n -= 1;
		if (d < 1000000000)
			d *= 10;
		i -= 1;
	}

	if (n > 0 && m == -1)
		n *= m;

	if (d >= 100000000 && n > 0)
		n += 1;
	if (d >= 100000000 && n < 0)
		n -= 1;

	return (n);
}

