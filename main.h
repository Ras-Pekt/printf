#ifndef MAIN_H
#define MAIN_H

#include<stdarg.h>

int _putchar(char c);
void _puts(char *str);
int hexa(int n);
int hexa_upper(int n);
int oct(int n);
int _printf(const char *format, ...);
int _switch(char format, va_list uv);
int print_char(va_list uv);
int print_string(va_list uv);
int print_decimal(va_list uv);
int print_recur(int n);
int print_rev(va_list uv);
int print_hex(va_list uv);
int print_oct(va_list uv);
int print_hex_upper(va_list uv);

#endif

#ifndef INT_MAX
#define INT_MAX 2147483647
#endif

#ifndef INT_MIN
#define INT_MIN -2147483648
#endif
