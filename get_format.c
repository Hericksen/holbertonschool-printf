#include "main.h"

int (*get_format(char c))
{
    specifier_t specifiers[] =
    {
        {'c', printchar},
        {'s', printstring},
        {NULL, NULL}
    };
    int i = 0;
    while (specifiers[i].format)
    {
        if (specifiers[i].format == c)
        {
            return (specifiers[i].f);
        }
        i++;
    }
    return (NULL);
}
