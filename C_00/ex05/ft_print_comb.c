/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/05 10:26:11 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/06 20:08:11 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_helper(int a, int b, int c)
{
	char	e;

	if (a == 10)
		return ;
	else if (b == 10)
		ft_helper(a + 1, a + 2, a + 3);
	else if (c == 10)
		ft_helper(a, b + 1, b + 2);
	else
	{
		write(1, ", ", 2);
		e = '0' + a;
		write(1, &e, 1);
		e = '0' + b;
		write(1, &e, 1);
		e = '0' + c;
		write(1, &e, 1);
		ft_helper(a, b, c + 1);
	}
}

void	ft_print_comb(void)
{
	write(1, "012", 3);
	ft_helper(0, 1, 3);
}
