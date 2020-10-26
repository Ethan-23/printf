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

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format[i] != '\0'; charnum++, i++)
	{
		if (format[i] == '%')
		{
			charnum += switch_case(format[i + 1], list);
			i += 2;
		}
		_putchar(format[i]);
	}
	va_end(list);
	return (charnum);
}
