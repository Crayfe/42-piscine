/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:39:42 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/22 17:49:45 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	aux_write_number(char *c, int i)
{
	while (i >= 0)
		write(1, c + i--, 1);
}

int	aux_is_valid(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || (base[0] && !base[1]))
		return (0);
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[i] && base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	aux_get_size(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	char			c[100];
	int				i;
	unsigned int	nbr2;

	i = 0;
	if (aux_is_valid(base))
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			nbr2 = nbr * -1;
		}
		else
			nbr2 = nbr;
		while (nbr2 > 0)
		{
			c[i++] = base[nbr2 % aux_get_size(base)];
			nbr2 = nbr2 / aux_get_size(base);
		}
		aux_write_number(c, i - 1);
	}
}
/*
#include <stdio.h>
int main()
{
	ft_putnbr_base(-2147483648, "0123456789");
	printf("\n");
	ft_putnbr_base(-2147483648, "0123456789abcdef");
	printf("\n");
	ft_putnbr_base(-2147483648, "01");
	printf("\n");
        ft_putnbr_base(-2147483648, "poniguay");
	printf("\n");
        ft_putnbr_base(-2147483648, "hola");


        printf("\n");
	return (0);
}
*/
