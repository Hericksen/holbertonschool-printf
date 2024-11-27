#include "main.h"

int print_char(va_list list)
{
	char c = va_arg(list, int);

	_putchar(c);
	return (1);
}

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

int print_percent(va_list list)
{
	(void)list;
	_putchar('%');
	return (1);
}

int print_decimal(va_list list)
{
	int n = va_arg(list, int);
	unsigned int num;
	char buffer[12];
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
