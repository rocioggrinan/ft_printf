/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-12 15:01:01 by rogarci2          #+#    #+#             */
/*   Updated: 2025-02-12 15:01:01 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

/*===================Includes=================*/

# include <fcntl.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdarg.h>

/*===================Functions=================*/

int ft_converter(char format, va_list arguments);
int ft_printf(char const *format, ...);
int  ft_putchar(char c);
int	ft_putstr(char *s);
void	ft_putnbr_base(int n, char *base);

#endif