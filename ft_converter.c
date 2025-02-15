#include <stdarg.h>
#include "ft_printf.h"

int ft_converter(char format, va_list arg)
{
    int size;

    size = 0;
    if (format == 'c')
        size += ft_putchar(va_arg(arg, int));
    else if (format == 's'){
        size += ft_putstr(va_arg(arg, char *));
    }
    else if (format == 'p'){
        ; //TODO:
    }
    else if (format == 'd' || format == 'i'){
        ; //TODO:
    }
    else if (format == 'u'){
        ; //TODO:
    }
    else if (format == 'x'){
        ; //TODO:
    }
    else if (format == 'X'){
        ; //TODO:
    }
    else if (format == '%'){
        ft_putchar('%');
    }
    else 
        ft_putchar(format);
    return (size);
}