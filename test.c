#include "main.h"
#include <stdio.h>

int main(void)
{
	int len_1, len_2;

	/* ===========> %S <=========== */
	printf("----------------------\n");
	printf("------> S CASES <-----\n");
	printf("----------------------\n");
	/* Test 1: Argument with non-printable characters */
	len_1 = printf("Expected output:   Best\\x0ASchool\n");
	len_2 = _printf("Current output:    %S\n", "Best\nSchool");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:   Hello\\x09World\\x0A\n");
	len_2 = _printf("Current output:    %S\n", "Hello\tWorld\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 2: Argument with only printable characters */
	len_1 = printf("Expected output:   %s\n", "Hello World!");
	len_2 = _printf("Current output:    %S\n", "Hello World!");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 3: Empty argument */
	len_1 = printf("Expected output:   %s\n", "");
	len_2 = _printf("Current output:    %S\n", "");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	/* Test 4: NULL argument */
	len_1 = printf("Expected output:   %s\n", NULL);
	len_2 = _printf("Current output:    %S\n", NULL);
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);

	return (0);
}
