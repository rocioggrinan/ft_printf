/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-21 09:32:52 by rogarci2          #+#    #+#             */
/*   Updated: 2025-02-21 09:32:52 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

/*===================Includes=================*/

# include <fcntl.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

/*===================Functions=================*/

int		ft_converter(char format, va_list arguments);
int		ft_printf(char const *format, ...);
int		ft_putchar(char c);
int		ft_putstr(char *s);
long	ft_putnbr_base(long nbr, char *base);

int	ft_putptr(unsigned long ptr);

int		ft_putnbr_sign(unsigned long nbr, char *base);
int		ft_punt(void *ptr);
int		ft_strlen(char *a);

#endif