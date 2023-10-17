#include "main.h"

/**
 * print_pointer - Print a memory address
 * @val: A va_list containing the pointer to print
 *
 * Return: The number of characters printed.
 */
int print_pointer(va_list val)
{
    unsigned long int pointer = va_arg(val, unsigned long int);
    int count = 0;

    _putchar('0');
    _putchar('x');
    count += 2;
    count += print_hex_extra(pointer);

    return count;
}
