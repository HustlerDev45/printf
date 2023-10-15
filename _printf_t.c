#include "main.h"

/**
 * _printf - printf function.
 * @format: The format string.
 * @...: A variable number of arguments to print.
 *
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;

	va_start(args, format);

	while (format && *format)
	{
		if (*format != '%')
		{
			putchar(*format);
			printed_chars++;
		}
		else
		{
			format++; // Move past '%'
			if (*format == 'c')
			{
				char c = va_arg(args, int);
				putchar(c);
				printed_chars++;
			}
			else if (*format == 's')
			{
				char *str = va_arg(args, char *);
				if (str == NULL)
					str = "(null)";
				while (*str)
				{
					putchar(*str);
					printed_chars++;
					str++;
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				printed_chars++;
			}
		}
		format++;
	}

	va_end(args);

	return printed_chars;
}
