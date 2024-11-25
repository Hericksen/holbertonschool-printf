#include "2main.h"

int _printf(const char *format, ...)
{
    int i = 0;
    int (*f)(void);
    va_list variables;
    va_start(variables, format);
    while (format[i] != '\0')
    {
        if (format[i] == '%')
        {
            get_format(format[i + 1]);
            f(va_arg(variables, void));
        }
        else
        {
            write(1, &format[i], 1);
        }
        i++;
    }
    return (0);
}
