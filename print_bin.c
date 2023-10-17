#include "main.h"

/**
 * print_bin - Print an unsigned int in binary format.
 * @val: The va_list containing the unsigned int to print in binary.
 *
 * Return: Number of characters printed.
 */
int print_bin(va_list val)
{
    unsigned int num = va_arg(val, unsigned int);
    int count = 0;

    if (num == 0)
    {
        count += _putchar('0');
    }
    else
    {
        count += convert_and_print_binary(num);
    }

    return (count);
}

/**
 * convert_and_print_binary - Convert an unsigned integer to binary and print it.
 * @num: The unsigned integer to convert and print.
 *
 * Return: Number of characters printed.
 */
int convert_and_print_binary(unsigned int num)
{
    int count = 0;
    char buffer[32];
    int index = 0;

    while (num > 0)
    {
        buffer[index] = (num % 2) + '0';
        num = num / 2;
        index++;
    }

    for (index--; index >= 0; index--)
    {
        count += _putchar(buffer[index]);
    }

    return (count);
}

