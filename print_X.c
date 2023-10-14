#include "include"

int print_HEX(va_list val)
{
    unsigned int num = va_arg(val, unsigned int);
    return write_hexadecimal_uppercase(num);
}

int write_hexadecimal_uppercase(unsigned int num)
{
    int count = 0;
    char *hex_chars = "0123456789ABCDEF";

    if (num / 16 != 0)
    {
        count += write_hexadecimal_uppercase(num / 16);
    }

    return (count + _putchar(hex_chars[num % 16]));
}
