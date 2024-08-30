/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:55:48 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/16 12:12:33 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				equal;
	unsigned int	i;

	equal = 0;
	i = 0;
	while (i < n)
	{
		if (!s1[i] && !s2[i])
		{
			break ;
		}
		else if ((s1[i] < s2[i]) || (!s1[i] && s2[i]))
		{
			equal = -1;
			break ;
		}
		else if ((s1[i] > s2[i]) || (!s2[i] && s1[i]))
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
	char	c1[10] = "cadfna";
	char	c2[10] = "cadena";
	char	c3[10] = "cade";
	char    c4[10] = "cadenaplus";
	printf("%i \n", ft_strncmp(c1, c2, 9));
	printf("%i \n", ft_strncmp(c1, c3, 3));
	printf("%i \n", ft_strncmp(c1, c4, 3));
}
*/
