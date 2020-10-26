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

	va_start(list, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			switch(format[i + 1])
			{
			case 'c':
				_putchar(va_arg(list, int));
				break;
			case 's':
				charnum++;
				ptr = va_arg(list, char *);
				while (ptr[count] != '\0')
				{
				_putchar(ptr[count]);
				count++;
				charnum++;
				}
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
		i++;
		charnum++;
	}
	va_end(list);
	return (charnum - 2);
}
