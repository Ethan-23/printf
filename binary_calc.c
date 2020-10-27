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

int binary_calc(va_list list)
{
	int binary[] = {4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1};
	int test = va_arg(list, int);
	int i;
	int charnum = 0;
	int swit = 0;

	for (i = 0; i != 13; i++)
	{
		if (test - binary[i] >= 0)
		{
			test -= binary[i];
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
