#include "main.h"

/** int _printf(const char *format, ...)
*/
int main(void)
{
    int numchar = 0, i;
    /** int i = 0, numchar = 0, numvar;
    * int (*f)(va_list);
    * va_list string;
    * va_start(string, format);
    */
    while (format[i] != '\0')
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
