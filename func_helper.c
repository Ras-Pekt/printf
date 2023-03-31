#include"main.h"
#include<stdarg.h>
#include<stdio.h>
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
 * oct - recursively prints each digit in octal
 * @n: input unknown varialble from va_list
 * Return: count of digits printed
 */
int oct(int n)
{
	int count = 0;

	if (n >= 8)
	{
		count = oct(n / 8);
	}
	else
	{
		_putchar(n + '0');
		count++;
	}
	return (count);
}

/**
 * hexa - recursively prints each digit in hexa
 * @n: input unknown varialble from va_list
 * Return: count of digits printed
 */
int hexa(int n)
{
	int digit, count;

	if (n >= 16)
	{
		count = hexa(n / 16);
	}
	digit = n % 16;

	if (digit < 10)
	{
		_putchar(digit + '0');
	}
	else
	{
		_putchar(digit - 10 + 'a');
	}
	count++;
	return (count);
}
/**
 * hexa_upper - prints digit in hexa
 * @n: input unknown varialble from va_list
 * Return: count of digits printed
 */
int hexa_upper(int n)
{
	int digit, count;

	if (n >= 16)
	{
		count = hexa(n / 16);
	}
	digit = n % 16;

	if (digit < 10)
	{
		_putchar(digit + '0');
	}
	else
	{
		_putchar(digit - 10 + 'A');
	}
	count++;
	return (count);
}

