#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>

typedef struct specifier
{
    char c;
    int (*f)(void);
} specifier_t;

int _printf(const char *format, ...);
int (*get_format(char c));
int printchar(char c);
int printstring(char *c);
#endif
