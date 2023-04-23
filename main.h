#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	_putchar(char c);
int	_puts(char *str);
void	print_num(long n, int *len);
int	_printf(const char *format, ...);
#endif
