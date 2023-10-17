#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: The format string.
 *
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
    va_list args;
    int printed_chars = 0;

    va_start(args, format);

    if (format == NULL)
        return (-1);

    while (*format)
    {
        if (*format != '%')
        {
            _putchar(*format);
            printed_chars++;
        }
        else
        {
            format++;
            if (*format == 'c')
                printed_chars += print_char(va_arg(args, int));
            else if (*format == 's')
                printed_chars += print_string(va_arg(args, char *));
            else if (*format == '%')
                printed_chars += print_percent();
            else
            {
                _putchar('%');
                printed_chars++;
                if (*format)
                {
                    _putchar(*format);
                    printed_chars++;
                }
            }
        }
        format++;
    }

    va_end(args);
    return (printed_chars);
}
