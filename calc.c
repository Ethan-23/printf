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
	if (number == 0)
	{
		_purchar('0');
		charnum++;
	}
	if (number < 0)
	{
		_putchar('-');
		charnum++;
		number *= -1;
	}
	hold = number;
/* continuously divides given number by 10 to find the length */
	for (count = 0; number >= 10; count++, number = number / 10)
	{}
/*uses the number counted above to go though each number and divide it by 10 */
/* to the power it needs to reach the correct ammount of zeros */
	for (; count > 0; charnum++, count--)
	{
		for (pow = 1, number = count; number > 0; number--, pow = pow * 10)
		{}
		_putchar((hold / pow) + '0');
		hold = hold % pow;
	}
/* Mods the last number to get the digit in the ones place */
	_putchar((hold % 10) + '0');
	charnum++;
	return (charnum);
}
