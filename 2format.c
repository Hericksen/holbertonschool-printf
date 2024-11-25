#include "main.h"

int printchar(char c)
{
    write(1, &c, 1);
    return(1);
}

int printstring(char *c)
{
    int i = 0;
    while (c[i] != '\0')
    {
        write(1, c[i], 1);
    }
    return (i + 1);
}
