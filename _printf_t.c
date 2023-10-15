#include <stdarg.h>
#include <unistd.h>
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
<<<<<<< HEAD:_printf_t.c
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
=======
        va_list args;
        int printed_chars = 0, num = 0, len = 0;
        char digit;

        va_start(args, format);
        while (*format)
        {
                if (*format != '%')
                {
                        write(1, format, 1);
                        printed_chars++;
                }
                else
                {
                        format++;
                        if (*format == 'd' || *format == 'i')
                        {
                                num = va_arg(args, int);
                                if (num < 0)
                                {
                                        write(1, "-", 1);
                                        num = -num;
                                }
                                do {
                                        digit = '0' + num % 10;
                                        write(1, &digit, 1);
                                        num /= 10;
                                        len++;
                                } while (num > 0);
                                printed_chars += len;
                        }
                }
                format++;
        }
        va_end(args);
        return (printed_chars);
>>>>>>> dbb07b5557d3053f015292bd6976a4904ddcb86b:task-1.c
}
