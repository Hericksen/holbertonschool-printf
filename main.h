#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stddef.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
* struct specifier - Struct that maps format specifiers to corresponding
* functions.
* @type: A pointer to a character string representing a format specifier
* (e.g., "c" or "s").
* @func_print: A function pointer to the corresponding printing function
*/
typedef struct specifier
{
	char *type;

	int (*func_print)(va_list list);
} specifier_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list list);
int print_string(va_list list);
int print_perc(va_list list);
int print_deci(va_list list);
#endif /* MAIN_H */
