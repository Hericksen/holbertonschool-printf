#include "main.h"
/**
 * process_specifier - Processes a format specifier and calls the appropriate
 * function to handle it.
 * @format: A string containing the format specifier.
 * @list: The va_list with arguments.
 * @count: A pointer to the count of characters printed.
 * Return: 1 if the specifier was valid, 0 otherwise.
 */
int process_specifier(const char *format, va_list list, int *count)
{
	specifier_t spec[] = {{"c", print_char},
	{"s", print_string},
	{"%", print_perc},
	{"d", print_deci},
	{"i", print_deci},
	{NULL, NULL}};
	int j = 0;

	while (spec[j].type)
	{
		if (*spec[j].type == *format)
		{
			*count += spec[j].func_print(list);
			return (1);
		}
		j++;
	}
	return (0);
}
/**
 * _printf - Custom implementation of the printf function.
 * @format: A string containing characters to print and format specifiers.
 * Return: The total number of characters printed.
 */
int _printf(const char *format, ...)
{
	va_list list;
	int i = 0, j = 0, count = 0;

	va_start(list, format);
	if (format == NULL)
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			/* Skip spaces after '%'*/
			for (j = 0; format[i] == ' '; j++)
				i++;
			if (!process_specifier(&format[i], list, &count))
			{
				/* Handle invalid specifier*/
				if (format[i] == '\0')
					return (-1);
				else
				{
					_putchar('%');
					count += j + 2;
					while (j-- > 0)
						_putchar(' ');
					_putchar(format[i]);
				}
			}
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(list);
	return (count);
}
