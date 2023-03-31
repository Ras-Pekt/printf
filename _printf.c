#include"main.h"
#include<stdarg.h>
#include <stdio.h>
/**
 * _printf - produces output according to a format.
 * @format: last named argument
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list uv;
	int count = 0, f_count;
	/*char *fmt = "csdi"; (Think more on this idea)*/

	va_start(uv, format);

	if (format == NULL)
		return (-1);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (format == NULL) /*Refactor this code*/
			{
				_putchar('%');
				count++;
			}
			else if (*format == '!') /*Refactor this code*/
			{
				_putchar('%');
				_putchar('!');
				count += 2;
			}
			else if (*format == 'K') /*Refactor this code*/
			{
				_putchar('%');
				_putchar('K');
				count += 2;
			}
			else
			{
				f_count = _switch(*format, uv);
				count = count + f_count;
			}
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

