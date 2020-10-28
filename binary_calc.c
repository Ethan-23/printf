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
/* loop to find the biggest binary number to fit in given number*/
	for (count = 1; count * 2 <= test; count *= 2)
	{
	}
/* subtracts highest number then continuously divides highest binary number */
/* and every time it gets one that fits inputs it */
	for (; count >= 1; count /= 2)
	{
		if (test - count >= 0)
		{
			test -= count;
			_putchar('1');
			charnum++;
/*swit is a on of switch to tell if there is a one and if there is allows 0s */
/* to be printed */
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
