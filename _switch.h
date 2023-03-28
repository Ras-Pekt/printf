#ifndef _SWITCH_H
#define _SWITCH_H

#include"main.h"
#include<stdarg.h>

int (*conv_specifier[])(va_list) = {print_char, print_string, print_decimal};
/**
 * _switch - iterates through the format string
 * @format: input string
 * @uv: unkown argments from va_list
 * Return: count of elements printed
 */
int _switch(char format, va_list uv)
{
	int count = 0, f_count;

	switch (format)
	{
	case 'c':
		conv_specifier[0](uv);
		count++;
		break;
	case 's':
		f_count = conv_specifier[1](uv);
		count += f_count;
		break;
	case 'd':
		f_count = conv_specifier[2](uv);
		count += f_count;
		break;
	case 'i':
		f_count = conv_specifier[2](uv);
		count += f_count;
		break;
	case '%':
		_putchar('%');
		count++;
		break;
	}
	return (count);
}

#endif
