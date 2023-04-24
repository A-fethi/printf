#include "main.h"

/**
 * print_binary - Prints number converted to binary
 * @num: number to convert
 * @len: pointer to string length
 *
 * Return: 0 on succes, -1 on error
 */
int print_binary(unsigned int num, int *len)
{
	int i, size = 2;
	char *binary;

	binary = malloc(size * sizeof(char));
	if (!binary)
	{
		free(binary);
		return;
	}

	if (num == 0)
	{
		binary[0] = '0';
		i = 1;
	}
	else if (num == 1)
	{
		binary[0] = '1';
		i = 1;
	}
	else
	{
		for (i = 0; num != 0; i++)
		{
			binary[i] = (num % 2) + '0';
			binary = _realloc(binary, size * sizeof(char), (size + 1) * sizeof(char));
			size++;
			num /= 2;
		}
	}
	binary[i] = '\0';
	rev_string(binary);
	*len += _puts(binary);
	free(binary);
}
