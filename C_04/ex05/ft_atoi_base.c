/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:50:35 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/23 15:37:56 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	aux_contains(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
		if (c == base[i++])
			return (1);
	return (0);
}

int	aux_get_size(char *c)
{
	int	i;

	i = 0;
	while (c[i])
		i++;
	return (i);
}

int	aux_get_sign(char *c, char *base, int *sign, int *i)
{
	*sign = 1;
	*i = 0;
	while (c[*i] == ' ' || c[*i] == '\f'
		|| c[*i] == '\n' || c[*i] == '\r'
		|| c[*i] == '\t' || c[*i] == '\v')
		*i = *i + 1;
	if (!(c[*i] == '-' || c[*i] == '+' || aux_contains(c[*i], base)))
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
	if (!aux_contains(c[*i], base))
		return (0);
	return (1);
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

int	ft_atoi_base(char *str, char *base)
{
	int		i;
	int		j;
	int		sign;
	int		value;

	value = 0;
	if (!aux_get_sign(str, base, &sign, &i) || !aux_is_valid(base))
		return (0);
	while (str[i])
	{
		if (aux_contains(str[i], base))
		{
			j = 0;
			while (str[i] != base[j])
				j++;
			value = (aux_get_size(base) * value) + j;
			i++;
		}
		else
			break ;
	}
	return (value * sign);
}
/*
int	main (void)
{
	printf("%i\n", ft_atoi_base("-10000000000000000000000000000000", "01"));
	printf("%i\n", ft_atoi_base("teteteteteet", "te"));
	printf("%i\n", ft_atoi_base("pkk", "kp"));
	printf("%i\n", ft_atoi_base("pedro", "pedro"));
	printf("%i\n", ft_atoi_base("-++-+-+ -+ 	+-+piper", "hiper"));
}
*/
