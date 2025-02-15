#include <stdio.h>
#include "ft_printf.h"

/*int main(void)
{
    char c = '%';
    char *str = "hola rocio";
    
    // Prueba con un solo carácter
    printf("Prueba con un solo carácter: %c\n", c);
    ft_printf("Prueba con un solo carácter: %c\n", c);

    printf("Prueba con un solo carácter: %s\n", str);
    ft_printf("Prueba con un solo carácter: %s\n", str);
    return 0;
}*/
/*int  ft_putchar(char c)
{
    if (write (1, &c, 1) == -1)
        return (-1);
    return (1);
}

int		check_base(char *base)
{
	int	i;
	int	z;

	i = 0;
	z = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[i])
	{
		z = i + 1;
		if (base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] < 32 || base[i] > 126)
			return (0);
		while (base[z])
		{
			if (base[i] == base[z])
				return (0);
			z++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	size_base;
	int	nbr_final[100];
	int	i;

	i = 0;
	size_base = 0;
	if (check_base(base))
	{
		if (nbr < 0)
		{
			nbr = -nbr;
			ft_putchar('-');
		}
		while (base[size_base])
			size_base++;
		while (nbr)
		{
			nbr_final[i] = nbr % size_base;
			nbr = nbr / size_base;
			i++;
		}
		while (--i >= 0)
			ft_putchar(base[nbr_final[i]]);
	}
}*/


/*int main(void)
{
	int n = 42;
	char *base = "10";
	
	ft_putnbr_base(n, base);
	
	return 0;
}*/