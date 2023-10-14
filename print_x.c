#include "mian.h"

int print_hex(va_list val)
{
    unsigned int num = va_arg(val, unsigned int);
    return write_hexadecimal(num);
}

int write_hexadecimal(unsigned int num)
{
    int count = 0;
    char *hex_chars = "0123456789abcdef";

    if (num / 16 != 0)
    {
        count += write_hexadecimal(num / 16);
    }

    return (count + _putchar(hex_chars[num % 16]));
}
