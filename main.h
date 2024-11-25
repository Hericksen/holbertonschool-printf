#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct specifier
{
    char *format;
    int (*f)(va_list string);
} specifier_t;

int _printf(const char *format, ...);
int _strlen(const char *s);
int printchar(va_list list);
int printstring(char *var, int len);
int (*get_format(char c));
#endif