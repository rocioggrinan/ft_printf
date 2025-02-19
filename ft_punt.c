#include "ft_printf.h"

int ft_punt(void* ptr)
{
    int i;

    i = 0;
    if (ptr == NULL) 
        return (ft_putstr("(nil)"));
    i += ft_putstr("0x");
    i += ft_putnbr_sign((unsigned long)ptr, "0123456789abcdef");

    return (i);
}