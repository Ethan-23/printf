#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"
/**
 * _printf - printf
 * @format: format
 * Return: 0
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0;
	int charnum = 0;
	int test = 0;

	if (format == NULL)
		return (-1);
	if (format[1] != '\"')
		return (-1);
	va_start(list, format);
	for (i = 0; format[i] != '\0'; charnum++, i++)
	{
		if (format[i] == '%')
		{
			test = switch_case(format[i + 1], list);
			charnum += test;
			if (test <= 0)
				return (-1);
			i += 2;
		}
			_putchar(format[i]);
	}
	va_end(list);
	return (charnum);
}
