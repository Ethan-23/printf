#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * switch_case - switch cases of specifiers for printf
 * @list: va list
 * @format: format
 * Return: 0
 */

int switch_case(char format, va_list list)
{
	int count = 0;
	char *ptr;
	int charnum = 0;

	switch (format)
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
		exit(1);
		break;
	}
	return (charnum);
}
