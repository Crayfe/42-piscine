/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:54:14 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/16 11:59:15 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	equal;
	int	i;

	equal = 0;
	i = 0;
	while (s1[i] || s2[i])
	{
		if ((s1[i] < s2[i]) || (s2[i] && !s1[i]))
		{
			equal = -1;
			break ;
		}
		else if ((s1[i] > s2[i]) || (s1[i] && !s2[i]))
		{
			equal = 1;
			break ;
		}
		i++;
	}
	return (equal);
}
/*
#include <stdio.h>
int	main()
{
	char	c1[10] = "cadena";
	char	c2[10] = "cadena";
	char	c3[10] = "cade";
	char    c4[10] = "cadenaplus";
	printf("%i \n", ft_strcmp(c1, c2));
	printf("%i \n", ft_strcmp(c1, c3));
	printf("%i \n", ft_strcmp(c1, c4));
}
*/
