#include"main.h"
#include<stdarg.h>

int (*conv_specifier[])(va_list) = {
				print_char,
				print_string,
				print_decimal,
				print_hex,
				print_hex_upper,
				print_oct, print_rev
				};
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
	case 'x':
		f_count = conv_specifier[3](uv);
		count += f_count;
		break;
	case 'X':
		f_count = conv_specifier[4](uv);
		count += f_count;
		break;
	case 'o':
		f_count = conv_specifier[5](uv);
		count += f_count;
		break;
	case 'r':
		f_count = conv_specifier[6](uv);
		count += f_count;
		break;
	case '%':
		_putchar('%');
		count++;
		break;
	}
	return (count);
}
