#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "holberton.h"

/**
 * print_rev - function that takes a string and prints it in reverse
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
	_putchar('\0');
	return (charnum);
}
