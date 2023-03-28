#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include"main.h"
#include<stdarg.h>
#include<stdio.h>

/**
 * print_char - prints a character to stdout
 * @uv: input unknown varialble from va_list
 * Return: count of elements printed
 */
int print_char(va_list uv)
{
	_putchar(va_arg(uv, int));
	return (0);
}

/**
 * print_string - prints a string to stdout
 * @uv: input unknown variable from va_list
 * Return: count of elements printed
 */
int print_string(va_list uv)
{
	int count = 0;
	char *str = va_arg(uv, char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

/**
 * print_decimal - prints a decimal (base 10) to stdout
 * @uv: input unknown variable from va_list
 * Return: count from elements printed
 */
int print_decimal(va_list uv)
{
	int count = 0;
	int dec = va_arg(uv, int);

	if (dec < 10)
	{
		_putchar('0' + dec);
		count++;
	}
	else
	{
		_putchar('0' + (dec / 10));
		_putchar('0' + (dec % 10));
		count += 2;
	}
	return (count);
}

/**
 * print_interger - prints an octal (base 8) or hexadecimal (base 16) to stdout
 * @uv: input unknown variable from va_list
 * Return: count from elements printed
 */
int print_interger(va_list uv)
{
	int count = 0;
	int oct = va_arg(uv, int);
	int hex = va_arg(uv, int);

	if (oct < 8 || hex < 16)
	{
		_putchar('0' + interger);
		count++;
	}
	else
	{
		_putchar('0' + (oct / 8));
		_putchar('0' + (hex / 16));
		count += 2;
	}
	return (count);
}

#endif
