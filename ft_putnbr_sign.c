/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_sign.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-21 09:33:16 by rogarci2          #+#    #+#             */
/*   Updated: 2025-02-21 09:33:16 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_sign(unsigned long nbr, char *base)
{
	int	size;
	int	count;

	size = 0;
	count = ft_strlen(base);
	if (nbr == 0)
		return (size += ft_putchar('0'));
	if ((long)nbr >= count)
		size += ft_putnbr_sign(nbr / count, base);
	size += ft_putchar(base[nbr % count]);
	return (size);
}
/*int main(void)
{
	int n = 6;
	char *base = "3f52a";

	ft_putnbr_ejemplo(n, base);

	return (0);
}*/