#include "main.h"
#include <stdio.h>
int _printf(const char *format, ...)
{
    specifier_t spec[] = {
        {"c", print_char},
        {"s", print_string},
        {"%", print_percent},
        {"d", print_decimal},
        {"i", print_decimal},
        {NULL, NULL},
    };
    va_list list;
    int i = 0, j = 0, count;
    va_start(list, format);

    while (format && format[i] != '\0')
    {
        /** if (format[i] == '%')
        * {
        *     f = get_format(format[i + 1]);
        *     numvar = f(va_arg(string, va_list));
        * }
        * else
        * {
        */
            write(1, &format[i], 1);
            numchar++;
        i++;
    }
    return (numchar);
}
