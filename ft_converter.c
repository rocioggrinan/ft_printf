/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_converter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-21 09:29:41 by rogarci2          #+#    #+#             */
/*   Updated: 2025-02-21 09:29:41 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

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
        size += ft_punt(va_arg(arg, void *));
    }
    else if (format == 'd' || format == 'i'){
        size += ft_putnbr_base(va_arg(arg, int), "0123456789");
    }
    else if (format == 'u'){
        size += ft_putnbr_sign(va_arg(arg, unsigned int), "0123456789");
    }
    else if (format == 'x'){
        size += ft_putnbr_base(va_arg(arg, unsigned int), "0123456789abcdef");
    }
    else if (format == 'X'){
        size += ft_putnbr_base(va_arg(arg, unsigned int), "0123456789ABCDEF");
    }
    else if (format == '%'){
        ft_putchar('%');
    }
    else 
        ft_putchar(format);
    return (size);
}