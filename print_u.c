#include "main.h"

int print_unsigned(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    return write_unsigned(num);
}

int write_unsigned(unsigned int num)
{
    if (num / 10 != 0)
    {
        write_unsigned(num / 10);
    }
    return (_putchar((num % 10) + '0'));
}

