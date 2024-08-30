/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:00:53 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/16 12:44:10 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_end;

	dest_end = 0;
	i = 0;
	while (dest[dest_end])
		dest_end++;
	while (i < nb && src[i])
	{
		dest[dest_end + i] = src[i];
		i++;
	}
	dest[dest_end + i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main()
{
	char	c1[15] = "cadena";
	char	c2[10] = "plus";
	printf("%s \n", ft_strncat(c1, c2, 1));
	printf("%s \n", ft_strncat(c1, c2, 5));
}
*/
