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
	int digit, i, size = 2;
	char *binary;

	binary = malloc(size * sizeof(char));

	for (i = 0; num / 2 != 0; i++)
	{
		binary[i] = (n % 2) + '0';
		binary = _realloc(binary, size * sizeof(char), ++size * sizeof(char));
		n /= 2;
	}
	binary[i] = '\0';
	rev_stríng(binary);
	_puts(binary, len);
	free(binary);
}
