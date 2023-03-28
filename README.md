# 0x11. C - printf
0. Write a function that produces output according to a format.

Prototype: `int _printf(const char *format, ...);`
Returns: the number of characters printed (excluding the null byte used to end output to strings)
Write output to stdout, the standard output stream
Format is a character string. The format string is composed of zero or more directives.
You need to handle the following conversion specifiers:
- c - prints out characters
- s - prints out strings

1. Education is when you read the fine print. Experience is what you get if you don't

Handle the following conversion specifiers:
d
i
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers

2. With a face like mine, I do better in print

Handle the following custom conversion specifiers:
b: the unsigned int argument is converted to binary

3. What one has not experienced, one will never understand in print

Handle the following conversion specifiers:
u
o
x
X
You don’t have to handle the flag characters
You don’t have to handle field width
You don’t have to handle precision
You don’t have to handle the length modifiers
