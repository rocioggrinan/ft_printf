/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <<rogarci2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:33:10 by rogarci2          #+#    #+#             */
/*   Updated: 2025/02/26 19:04:56 by rogarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

long	ft_putnbr_base(long nbr, char *base)
{
	long	num;
	long	size;
	long	count;

	size = 0;
	count = ft_strlen(base);
	if (nbr == 0)
		return (size += ft_putchar('0'));
	if (nbr < 0 && count == 10)
	{
		size += ft_putchar('-');
		num = -nbr;
	}
	else
		num = nbr;
	if (num >= count)
		size += ft_putnbr_base(num / count, base);
	size += ft_putchar(base[num % count]);
	return (size);
}
