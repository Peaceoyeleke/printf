#ifndef PRINT_F
#define PRINT_F

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _print_char(char c);
int _print_string(char *str);
int _print_percent(char a);

#endif
