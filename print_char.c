#include "main.h"

/**
 * print_char - Handles the 'c' conversion specifier.
 * @args: Argument list containing the character to print.
 *
 * Return: The number of characters printed.
 */
int print_char(va_list args)
{
    char c = va_arg(args, int);

    _putchar(c);
    return (1);
}

