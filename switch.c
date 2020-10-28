#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * pnull - print null
 *
 * Return: 0
 */
void pnull(void)
{
	_putchar('(');
	_putchar('n');
	_putchar('u');
	_putchar('l');
	_putchar('l');
	_putchar(')');
}

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
	char *ptr, test;

	switch (format)
	{
	case 'c':
		test = va_arg(list, int);
		charnum++;
		_putchar(test);
		break;
	case 's':
		ptr = va_arg(list, char *);
		if (ptr == NULL)
		{
			pnull();
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
	case 'b':
		charnum += binary_calc(list);
		break;
	case 'R':
		charnum += print_rev(list);
		break;
	default:
		break;
	}
	return (charnum);
}
