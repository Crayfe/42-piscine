/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 12:50:44 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/23 15:34:41 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	aux_get_sign(char *c, int *sign, int *i)
{
	*sign = 1;
	*i = 0;
	while (c[*i] == ' ' || c[*i] == '\f'
		|| c[*i] == '\n' || c[*i] == '\r'
		|| c[*i] == '\t' || c[*i] == '\v')
		*i = *i + 1;
	if (!(c[*i] == '-' || c[*i] == '+' || (c[*i] >= '0' && c[*i] <= '9')))
		return (0);
	else
	{
		while (c[*i] == '-' || c[*i] == '+')
		{
			if (c[*i] == '-')
				*sign = *sign * -1;
			*i = *i + 1;
		}
	}
	if (c[*i] < '0' || c[*i] > '9')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	char			*num_base;
	int				i;
	int				j;
	int				sign;
	unsigned int	value;

	num_base = "0123456789";
	value = 0;
	if (!aux_get_sign(str, &sign, &i))
		return (0);
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			j = 0;
			while (str[i] != num_base[j])
				j++;
			value = (10 * value) + j;
			i++;
		}
		else
			break ;
	}
	return (value * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int	main ()
{
	printf("%i\n", ft_atoi("-2147483648"));
	printf("%i\n", ft_atoi("2147483647"));
	printf("%i\n", ft_atoi("0"));
	printf("%i\n", ft_atoi("-2453"));
	printf("%i\n", ft_atoi("   	-24535abg555"));
	printf("%i\n", atoi("                -24535abg555"));


}
*/
