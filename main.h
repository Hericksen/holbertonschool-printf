#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct specifier
{
    char *type;
    int (*func_print)(va_list list);
} specifier_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_percent(va_list list);
int print_decimal(va_list list);
#endif
