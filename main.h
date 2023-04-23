#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>

int	_putchar(char c);
int	_puts(char *str);
void	print_num(long n, int *len);
int	_printf(const char *format, ...);
void print_binary(unsigned int num, int *len);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
void rev_string(char *s);

#endif
