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
int	print_binary(unsigned int num, int *len);
void	*_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char	*rev_string(char *s);
void	_hexalower(unsigned long num, int *len);
void	_hexaupper(unsigned long num, int *len);
void	_unsigned(unsigned long n, int *len);
int	_non_printable(char *s);
int	char_to_upper_hex(int num, int *len);
int	_octal(unsigned int num);
int	flags(const char *type, int *len);

#endif
