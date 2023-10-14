#include "main.h"

int print_oct(va_list val)
{
    unsigned int num = va_arg(val, unsigned int);
    return write_octal(num);
}

int write_octal(unsigned int num)
{
    if (num / 8 != 0)
    {
        write_octal(num / 8);
    }
    return (_putchar((num % 8) + '0'));
}
