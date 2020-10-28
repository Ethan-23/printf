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

/* checks to see if format is null and ends the program if it is */
	if (format == NULL || format[0] == '\0')
		return (-1);
	va_start(list, format);
/* for loop to go through characters */
	for (i = 0; format[i] != '\0'; i++)
	{
/* checks if there is a % in the format */
		if (format[i] == '%')
		{
/* switch case function */
			test = switch_case(format[i + 1], list);
			charnum += test;
/* switch case returns the charnum and if it is 0 the program exits */
			if (test <= 0)
				exit(-1);
			if (format[i + 2] == '\0')
				return (charnum);
			i += 2;
		}
			_putchar(format[i]);
			charnum++;
	}
	va_end(list);
	return (charnum);
}
