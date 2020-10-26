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
	int count = 0;
	va_list list;
	int i = 0;
	char *ptr;
	int charnum = 0;

	if (format == NULL)
		return (-1);
	va_start(list, format);
	for (i = 0; format[i] != '\0'; i++, charnum++)
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				charnum++;
				_putchar(va_arg(list, int));
				break;
			case 's':
				ptr = va_arg(list, char *);
				for (count = 0; ptr[count] != '\0'; count++, charnum++)
				_putchar(ptr[count]);
				break;
			case '%':
				charnum++;
				_putchar('%');
				break;
			default:
				break;
			}
			i += 2;
		}
		_putchar(format[i]);
	}
	va_end(list);
	return (charnum);
}
