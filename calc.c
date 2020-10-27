#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * calc_fun - calculator function for d
 * @list: list of givens
 * Return: 0
 */

int calc_fun(va_list list)
{
	int count = 0;
	int pow = 1;
	int charnum = 0;
	int hold = 0;
	int number = 0;

	number = va_arg(list, int);
	if (number < 0)
	{
		_putchar('-');
		number *= -1;
	}
	hold = number;
	for (count = 0; number >= 10; count++, number = number / 10)
	{}
	for (; count > 0; charnum++, count--)
	{
		for (pow = 1, number = count; number > 0; number--, pow = pow * 10)
		{}
		_putchar((hold / pow) + '0');
		hold = hold % pow;
	}
	_putchar((hold % 10) + '0');
	charnum++;
	return (charnum);
}
