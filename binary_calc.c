#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * binary_calc - calc for binary
 * @list: number given
 * Return: charnum
 */

unsigned int binary_calc(va_list list)
{
	int test = va_arg(list, int), charnum = 0, swit = 0, count = 0;

	if (test < 1)
		return (-1);
	for (count = 1; count * 2 <= test; count *= 2)
	{
	}
	for (; count >= 1; count /= 2)
	{
		if (test - count >= 0)
		{
			test -= count;
			_putchar('1');
			charnum++;
			swit = 1;
		}
		else
		{
			if (swit == 1)
			{
				_putchar('0');
				charnum++;
			}
		}
	}
	return (charnum);
}
