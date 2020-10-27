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
	int number = 0;
	int hold = 0;
	int pow = 1;

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
	case 'd':
	        number = va_arg(list, int);
		hold = number;
	        for (count = 0; number > 10; count++, number = number / 10)
		  {
		  }
		for (; count > 0; charnum++, count--)
		  {
		    for (pow = 1, number = count; number > 0; number--, pow = pow * 10)
		      {
		      } 
		    _putchar((hold / pow) + '0');
		    hold = hold % pow;
		  }
		_putchar((hold % 10) + '0');
		charnum++;
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
