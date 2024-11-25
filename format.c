#include "main.h"

int printchar(va_list list)
{
    char c;
    c = va_arg(list, int);
    write(1, &c, 1);
    return (1);
}

int printstring(va_list list)
{
    char *c;
    c = va_arg(list, int);
    write(1, &c, 1);
    return (1);
}
