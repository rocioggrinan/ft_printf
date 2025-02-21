/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-02-21 09:33:10 by rogarci2          #+#    #+#             */
/*   Updated: 2025-02-21 09:33:10 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_strlen(char *a)
{
	int	count = 0;
	while (a[count] != '\0')
		count++;
	return (count);
}
int	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	num;
	int				size;
	int				count;

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
		num = (unsigned int)nbr;

	if (num >= (unsigned int)count)
		size += ft_putnbr_base(num / count, base);
	size += ft_putchar(base[num % count]);

	return (size);
}
/*int main(void)
{
	int n = 6;
	char *base = "3f52a";
	
	ft_putnbr_ejemplo(n, base);
	
	return 0;
}*/