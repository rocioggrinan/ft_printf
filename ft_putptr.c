/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <<rogarci2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 14:15:56 by rogarci2          #+#    #+#             */
/*   Updated: 2025/02/26 19:23:57 by rogarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ft_printf.h"

static int	len_ptr(unsigned long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (write(1, "(nil)", 5));
	while (nb != 0)
	{
		len++;
		nb = nb / 16;
	}
	return (len);
}
static void	ft_put_ptr(unsigned long nb)
{
	if (nb >= 16)
	{
		ft_put_ptr(nb / 16);
		ft_put_ptr(nb % 16);
	}
	else
	{
		if (nb <= 9)
			ft_putchar((nb + '0'));
		else
			ft_putchar((nb - 10 + 'a'));
	}
}
int	ft_putptr(unsigned long ptr)
{
	int	char_printed;

	if (ptr == 0)
		return (write(1, "(nil)", 5));
	char_printed = 0;
	char_printed += write(1, "0x", 2);
	ft_put_ptr(ptr);
	char_printed += len_ptr(ptr);
	return (char_printed);
}
