#include "main.h"
/**
 * _printf - Custom implementation of the printf function.
 * @format: A string containing characters to print and format specifiers.
 * Return: The total number of characters printed.
 */
int _printf(const char *format, ...)
{
	specifier_t spec[] = {{"c", print_char}, {"s", print_string}, {"%", print_percent}, {"d", print_decimal}, {"i", print_decimal}, {NULL, NULL},};
	va_list list;
	int i = 0, j = 0, count = 0, verif;
	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			verif = 1;
			while (spec[j].type)
			{
				if (*spec[j].type == format[i])
				{
					count += spec[j].func_print(list);
					verif = 0;
				}
				j++;
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
		j = 0;
		i++;
	}
	va_end(list);
	return (count);
}
