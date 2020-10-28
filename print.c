#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_rev - prints string in rev
 * @list: given string
 * Return: Char number
 */

int print_rev(va_list list)
{
	int count;
	char *hold = va_arg(list, char *);
	int charnum = 0;

	for (count = 0; hold[count] != '\0'; count++)
		charnum++;
	for (; count >= 0; count--)
		_putchar(hold[count]);
	return (charnum);
}
