#include "main.h"
#include <stdarg.h>

/**
 * _printf - printf function.
 * @format: The format string.
 * @...: A variable number of arguments to print.
 *
 * Return: The number of char to print.
 */
int _printf(const char *format, ...)
{
	va_list args;
	int printed_chars = 0;
	char c, *str;

	va_start(args, format);
	for (; format && *format; format++)
	{
		if (*format != '%')
		{
			putchar(*format);
			printed_chars++;
		}
		else
		{
			format++;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				putchar(c);
				printed_chars++;
			}
			else if (*format == 's')
			{
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(null)";
				for (; *str; str++, printed_chars++)
				{
					putchar(*str);
				}
			}
			else if (*format == '%')
			{
				putchar('%');
				printed_chars++;
			}
		}
	}
	va_end(args);
	return (printed_chars);
}
