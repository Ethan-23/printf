#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

int _printf(const char *format, ...);

int _putchar(char c);

int switch_case(char format, va_list list);

int calc_fun(va_list list);

unsigned int binary_calc(va_list list);
#endif
