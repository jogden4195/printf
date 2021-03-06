#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>

int _printf(const char *format, ...);
int _strlen(char *s);
void _puts(char *str);
int _putchar(char c);
int print_number(int n);
int binary(unsigned int n);
int print_rev(char *s);
int dectohex(unsigned int n);
int rot13(char *s);
int u_print_number(unsigned int n);
int dectooct(unsigned int n);

#endif
