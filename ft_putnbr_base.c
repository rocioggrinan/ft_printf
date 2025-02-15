/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <rogarci2@student.42madrid.com>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-01-29 12:33:25 by rogarci2          #+#    #+#             */
/*   Updated: 2025-01-29 12:33:25 by rogarci2         ###   ########.com      */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

static int	ft_abs(int n)
{
	if (n < 0)
		n = n * -1;
	return (n);
}
static int check(char *base)
{
	int count;
	int count2;

	count = 0;
	count2 = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[count])
	{
		count2 = count + 1;
		if (base[count] == '+' || base[count] == '-')
			return (0);
		if (base[count] < 32 || base[count] > 126)
			return (0);
		while (base[count])
		{
			if (base[count] == base[count2])
				return (0);
			count2++;
		}
		count++;
	}
	return (1);
}

void	ft_putnbr_base(int n, char *base)
{
	int size;
	int	array[11];
	int		counter;

	size = 0;
	counter = 0;
	if (check(base))
	{
		if (n < 0)
		{
			n = -n;
			write(base, "-", 1);
		}
		while (base[size])
			size++;
		while (n || n != 0)
		{
			array[counter++] = ft_abs(n % 10) + '0';
			n = n / 10;
		}
		while (--counter >= 0)
			ft_putchar(base[array[counter]]);
	}
}
/*int	main(void)
{
	int fd;
	const char *n = "-2147483648";

	fd = open("prueba.txt", O_RDWR, O_APPEND);
	ft_putnbr_fd(-2147483648, fd);
	write(fd, "\n", 1);
	return (0);
}*/
int main(void)
{
	int n = 42;
	char *base = "10";
	
	ft_putnbr_base(n, base);
	
	return 0;
}