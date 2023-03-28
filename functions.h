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
 * @uv: input unknown varialble from va_list
 * Return: count of elements printed
 */
int print_string(va_list uv)
{
	int count = 0;
	char *str = va_arg(uv, char *);

	if (str == NULL)
	{
		str = "";
		_putchar(*str);
	}
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

#endif
