#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdlib.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *str);
void specifier_check(char spec, va_list args, int *len);
void print_number(int n, int *len);

#endif /* MAIN_H */
