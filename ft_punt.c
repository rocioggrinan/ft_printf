/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_punt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-21 09:32:58 by rogarci2          #+#    #+#             */
/*   Updated: 2025-02-21 09:32:58 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_punt(void *ptr)
{
	int	i;

	i = 0;
	if (ptr == NULL)
		return (ft_putstr("(nil)"));
	i += ft_putstr("0x");
	i += ft_putnbr_base((unsigned long)ptr, "0123456789abcdef");
	return (i);
}
