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
    char buffer[1024];
    int count = 0;

    buffer[count++] = '0';
    buffer[count++] = 'x';
    count += print_hex_extra_buffer(pointer, buffer + count);
    write(1, buffer, count);

    return count;
}

