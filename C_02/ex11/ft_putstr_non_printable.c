/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:46:25 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/15 18:37:08 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	c;
	char	*hex_base;

	i = 0;
	hex_base = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
		{
			c = '\\';
			write(1, &c, 1);
			c = hex_base[str[i] / 16];
			write(1, &c, 1);
			c = hex_base[str[i] % 16];
			write(1, &c, 1);
		}
		else
			write(1, str + i, 1);
		i++;
	}
}
/*
int     main(){

        char *not_alpha = "perro\ncroquetero";
	ft_putstr_non_printable(not_alpha);
        char alpha[9] = "puya~uuo";
	alpha[4] = (char) '~' + 2;
	ft_putstr_non_printable(alpha);

}
*/
