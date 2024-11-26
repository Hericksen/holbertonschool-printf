#include "main.h"
/**
* print_char - Prints a character passed as a variable argument.
* @list: A va_list containing the arguments passed to the function.
* Return: Always returns 1 (the number of characters printed).
*/
int print_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}
/**
* print_string - Prints a string passed as a variable argument.
* @list: A va_list containing the arguments passed to the function.
* Return: The total number of characters printed.
*/
int print_string(va_list list)
{
	char *str = va_arg(list, char *);

	int count = 0;

	if (str == 0)
		str = NULL;

	while (*str)
	{
		count += _putchar(*str);
		str++;
	}

	return (count);
}
/**
 * print_percent - Prints a percent symbol (%) as output.
 * @list: A va_list of arguments (unused in this function).
 * Return: Always returns 1 (the number of characters printed).
 */
int print_percent(va_list list)
{
	(void)list;
	_putchar('%');
	return (1);
}
/**
 * print_decimal - Prints an integer as a decimal number.
 * @list: A va_list containing the arguments passed to the function.
 * Return: The total number of characters printed.
 */
int print_decimal(va_list list)
{
	int n = va_arg(list, int);

	unsigned int num;

	char buffer[11];

	int i = 0, count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num == 0)
	{
		count += _putchar('0');
		return (count);
	}
	while (num > 0)
	{
		buffer[i++] = (num % 10) + '0';
		num /= 10;
	}

	for (i = i - 1; i >= 0; i--)
		count += _putchar(buffer[i]);

	return (count);
}
