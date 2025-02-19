#include "ft_printf.h"

static long	ft_strlen(char *a)
{
	long	count;

	count = 0;
	while (a[count] != '\0')
	{
		count++;
	}
	return (count);
}
int	ft_putnbr_sign(unsigned int nbr, char *base)
{
	long		size;
	long		count;

	size = 0;
	count = ft_strlen(base);
	if (nbr == 0)
		return (size += ft_putchar('0'));
	/*if (nbr == -2147483648)
		return (size += ft_putstr("-2147483648"));
	if (nbr < 0)
	{
		size += ft_putchar('-');
		nbr = -nbr;
	}*/
	if (nbr >= count)
		size += ft_putnbr_sign(nbr / count, base);
	size += ft_putchar(base[nbr % count]);
	return (size);
}
/*int main(void)
{
	int n = 6;
	char *base = "3f52a";
	
	ft_putnbr_ejemplo(n, base);
	
	return 0;
}*/