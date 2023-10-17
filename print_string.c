#include "main.h"

/**
 * print_string - Handles the 's' conversion specifier.
 * @args: Argument list containing the string to print.
 *
 * Return: The number of characters printed.
 */
int print_string(va_list args)
{
    char *str = va_arg(args, char *);
    int i;

    if (str == NULL)
    {
        write(1, "(null)", 6);
        return (6);
    }

    for (i = 0; str[i]; i++)
        _putchar(str[i]);

    return (i);
}

