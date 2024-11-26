#include "main.h"

int _printf(const char *format, ...)
{
    specifier_t spec[] = {
        {"c", print_char},
        {"s", print_string},
        {NULL, NULL},
    };
    va_list ap;
    int i = 0, j = 0;
    int count;
    va_start(ap, format);

    while (format && format[i] != '\0')
    {
        if (format[i] == '%')
        {
            i++;
            if(format[i] == '%')
                _putchar(37);
            while (spec[j].type)
            {
                if (*spec[j].type == format[i])
                {
                    spec[j].f(ap);
                    count++;
                }
                j++;
            }
        }
        else if (format[i] == '%')
            _putchar('%');
        else
        {
            _putchar(format[i]);
            count++;
        }
        i++;
    }
    va_end(ap);
    return (count);
}
