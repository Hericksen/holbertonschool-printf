#include "main.h"

int _strlen(const char *s)
{
    int lenght = 0;
    while (s[lenght] != '\0')
    {
        lenght++;
    }
    return (lenght);
}
