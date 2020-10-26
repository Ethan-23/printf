#include <stdlib.h>
#include <stdargs.h>
#include <stdio.h>
#include <limits.h>
#include "holberton.h"

/**
 * switch_case - switch cases of specifiers for printf
 *
 * @list: va list
 * @format: format
 * @count: count
 */

void switch_case(va_list list, char *format, int count)
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
}
