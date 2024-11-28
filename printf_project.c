#include "main.h"
/**
 * _printf - Custom implementation of the printf function.
 * @format: A string containing characters to print and format specifiers.
 * Return: The total number of characters printed.
 */
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
	int i = 0, j = 0, count = 0;

	va_start(list, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			while (spec[j].type)
			{
				if (*spec[j].type == format[i])
				{
					count += spec[j].func_print(list);
				}
				j++;
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
