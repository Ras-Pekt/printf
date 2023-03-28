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
 * print_recur - recursively prints each digit in number
 * @n: input integer from va_list
 * Return: count of digits printed
 */
int print_recur(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	if (n >= 10)
	{
		count += print_recur(n / 10);
	}
	_putchar((n % 10) + '0');

	count++;
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
#endif
