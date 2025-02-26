/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rogarci2 <<rogarci2@student.42madrid.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:33:21 by rogarci2          #+#    #+#             */
/*   Updated: 2025/02/26 19:24:17 by rogarci2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *s)
{
	int	a;

	a = 0;
	if (!s)
		return (write(1, "(null)", 6));
	while (s[a] != '\0')
		write(1, &s[a++], 1);
	return (a);
}
/*int main (void)
{
	int fd;
	char *s = "hola partdpa";
	int a;

	fd = open("prueba.txt", O_RDWR, O_APPEND);
	ft_putstr_fd(s, fd);
	return(0);
}*/