#include "main.h"
#include <stdio.h>

int print_char(va_list list)
{
    char c = va_arg(list, int);
    _putchar(c);
    return (1);
}

int print_string(va_list list)
{
    char *str = va_arg(list, char*);
    int count = 0;

    if (str == 0)
        str = NULL;

    while (*str)
    {
        count += _putchar(*str);
        str++;
    }

    return (count);
}
