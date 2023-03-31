#include"main.h"
#include<stdarg.h>
#include<stdio.h>
/**
 * print_hex_upper - prints digit in hexa
 * @uv: input unknown varialble from va_list
 * Return: count of digits printed
 */
int print_hex_upper(va_list uv)
{
	int n = va_arg(uv, int);
	int count = 0;

	count = hexa(n);
	return (count);
}
/**
 * print_hex - prints digit in hexa
 * @uv: input unknown varialble from va_list
 * Return: count of digits printed
 */
int print_hex(va_list uv)
{
	int n = va_arg(uv, int);
	int count = 0;

	count = hexa(n);
	return (count);
}
/**
 * oct - prints digit in octal
 * @uv: input unknown varialble from va_list
 * Return: count of digits printed
 */
int print_oct(va_list uv)
{
	int n = va_arg(uv, int);
	int count = 0;

	count = oct(n);
	return (count);
}
