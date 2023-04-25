#include "main.h"

/**
 * rot13 - Encode a string using rot13 and print it
 * @s: Our string
 *
 * Return: the string length.
 */
int rot13(char *s)
{
	int i, j;
	int len = 0;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char *rotated = _strdup(s);

	for (i = 0; rotated[i] != '\0'; i++)
	{
		for (j = 0; input[j] != '\0'; j++)
		{
			if (rotated[i] == input[j] && rotated[i - 1] != '\\')
			{
				rotated[i] = output[j];
				break;
			}
		}
	}

	while (rotated[len])
	{
		write(1, &rotated[len], 1);
		len++;
	}
	return (len);
}
