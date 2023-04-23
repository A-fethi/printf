#include "main.h"
#include <stdio.h>
#include <limits.h>

/**
 * main - Entry point
 *
 * Return: 0 on Succes.
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    len = _printf("Length:[%d, %i]\n", len, len);
    len2 = printf("Length:[%d, %i]\n", len2, len2);
    len =_printf("Negative:[%d]\n", -762534);
    len2 = printf("Negative:[%d]\n", -762534);
    len = _printf("Length:[%d, %i]\n", len, len);
    len2 = printf("Length:[%d, %i]\n", len2, len2);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    len = _printf("%c\n", 'H');
   len2 =  printf("%c\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    printf("Len:[%d]\n", INT_MIN);
    _printf("Len:[%d]\n", INT_MIN);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    printf("Len:[%d]\n", len);
    _printf("Len:[%d]\n", len2);
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    len = _printf("Unknown:[%r]ook\n");
    printf("Len:[%d]\n", len);
    _printf("Len:[%d]\n", len);
    return (0);
}
