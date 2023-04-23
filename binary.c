#include "main.h"

/**
 * print_binary - Prints number converted to binary
 * @num: number to convert
 * @len: pointer to string length
 *
 * Return: nothing.
 */
void print_binary(int num, int *len)
{
	int i, size = 2;
	char *binary;

	binary = malloc(size * sizeof(char));

	for (i = 0; num / 2 != 0; i++)
	{
		binary[i] = (num % 2) + '0';
		binary = _realloc(binary, size * sizeof(char), (size + 1) * sizeof(char));
		size++;
		num /= 2;
	}
	binary[i] = (num % 2) + '0';
	binary = _realloc(binary, size * sizeof(char), (size + 1) * sizeof(char));
	size++;
	num /= 2;
	binary[++i] = '\0';
	rev_string(binary);
	*len += _puts(binary);
	free(binary);
}
