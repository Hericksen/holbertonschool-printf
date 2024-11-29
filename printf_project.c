#include "main.h"
/**
 * _printf - Custom implementation of the printf function.
 * @format: A string containing characters to print and format specifiers.
 * Return: The total number of characters printed.
 */
int _printf(const char *format, ...)
{
	specifier_t spec[] = {{"c", print_char}, {"s", print_string},
	{"%", print_perc}, {"d", print_deci}, {"i", print_deci}, {NULL, NULL},};
	va_list list;
	int i = 0, j = 0, count = 0, verif;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			verif = 1;
			for (j = 0; spec[j].type; j++)
			{
				if (*spec[j].type == format[i])
				{
					count += spec[j].func_print(list);
					verif = 0;
				}
			}
			if (verif == 1)
			{
				_putchar(format[i - 1]);
				_putchar(format[i]);
				count += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
	}
	va_end(list);
	return (count);
}
