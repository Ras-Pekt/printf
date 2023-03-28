# 0x11. C - printf
1. Write a function that produces output according to a format.

Prototype: `int _printf(const char *format, ...);`
Returns: the number of characters printed (excluding the null byte used to end output to strings)
Write output to stdout, the standard output stream
Format is a character string. The format string is composed of zero or more directives
You need to handle the following conversion specifiers:
- c - prints out characters
- s - prints out strings
