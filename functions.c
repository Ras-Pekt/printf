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
 * print_decimal - prints any base-10 integer
 * @uv: input unknown varialble from va_list
 * Return: count of digits printed
 */
int print_decimal(va_list uv)
{
	int n, count = 0;

	n = va_arg(uv, int);
	count = print_recur(n);
	return (count);
}
/**
 * print_rev - prints a string in reverse
 * @uv: input unknown varialble from va_list
 * Return: count of digits printed
 */
int print_rev(va_list uv)
{
	int count, strCount;
	char *str = va_arg(uv, char *);

	if (str == NULL)
		str = "(null)";
	while (*str)
	{
		str++;
		strCount++;
	}
	count = strCount;
	for (count = count - 1; count >= 0; count--)
	{
		_putchar(str[count]);
	}
	return (strCount);
}
