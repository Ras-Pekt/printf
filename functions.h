#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include"main.h"
#include<stdarg.h>
#include<stdio.h>

int print_char(va_list uv)
{
	_putchar(va_arg(uv, int));
	return (0);
}

int print_string(va_list uv)
{
	int count = 0;
	char *str = va_arg(uv, char *);
	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}
	return (count);
}

#endif
