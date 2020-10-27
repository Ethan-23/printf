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
	int count = 0, charnum = 0;
	char *ptr;

	switch (format)
	{
	case 'c':
		charnum++;
		_putchar(va_arg(list, int));
		break;
	case 's':
		ptr = va_arg(list, char *);
		if (ptr == NULL)
		{
			_putchar('(');
			_putchar('N');
			_putchar('U');
			_putchar('L');
			_putchar('L');
			_putchar(')');
			charnum += 6;
			return (charnum);
		}
		for (count = 0; ptr[count] != '\0'; count++, charnum++)
			_putchar(ptr[count]);
		break;
	case 'd': case 'i':
		charnum += calc_fun(list);
		break;
	case '%':
		charnum++;
		_putchar('%');
		break;
	default:
		break;
	}
	return (charnum);
}
