/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:26:52 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/23 13:27:17 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_buffer(char *c, int i)
{
	while (i > 0)
		write(1, c - 1 + i--, 1);
}

void	ft_putnbr(int nb)
{
	char			c[12];
	unsigned int	nb2;
	int				i;

	i = 0;
	nb2 = 0;
	if (nb < 0)
	{
		nb2 = nb * -1;
		write(1, "-", 1);
	}
	else if (nb == 0)
		write(1, "0", 1);
	else
		nb2 = nb;
	while (nb2 > 0)
	{
		c[i] = nb2 % 10 + '0';
		nb2 = nb2 / 10;
		i++;
	}
	print_buffer(c, i);
}
/*
#include <stdio.h>
int	main()
{
	ft_putnbr(-2147483648);
	printf("\n");
	ft_putnbr(2147483647);
	printf("\n");
	ft_putnbr(0);
	printf("\n");
	ft_putnbr(1);
	printf("\n");
	ft_putnbr(-1);
	printf("\n");
	ft_putnbr(-483647);
	printf("\n");
}
*/
