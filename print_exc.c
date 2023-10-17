#include "main.h"

/**
 * print_exc_string - Print a string with non-printable characters escaped
 * @val: A va_list containing the string to print
 *
 * Return: The number of characters printed.
 */
int print_exc_string(va_list val)
{
    char *str = va_arg(val, char *);
    int count = 0;

    if (str == NULL)
        str = "(null)";

    for ( ; *str; str++)
    {
        if (*str < 32 || *str >= 127)
        {
            _putchar('\\');
            _putchar('x');
            count += 2;
            count += print_hex_extra(*str);
        }
        else
        {
            _putchar(*str);
            count++;
        }
    }

    return count;
}

