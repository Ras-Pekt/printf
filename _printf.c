#include"main.h"
#include"functions.h"
#include"_switch.h"
#include<stdarg.h>

/**
 * _printf - produces output according to a format.
 * @format: last named argument
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list uv;
	int count = 0, f_count;

	va_start(uv, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			f_count = _switch(*format, uv);
			count = count + f_count;
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(uv);
	return (count);
}
