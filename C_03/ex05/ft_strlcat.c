/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 11:04:20 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/17 11:11:44 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_end;

	dest_end = 0;
	i = 0;
	while (dest[dest_end])
		dest_end++;
	while (i < size && src[i])
	{
		dest[dest_end + i] = src[i];
		i++;
	}
	dest[dest_end + i] = '\0';
	return (dest_end + i);
}
/*
#include <stdio.h>
int	main()
{
	char	c1[15] = "cadena";
	char	c2[10] = "plus";
	printf("%i \n", ft_strlcat(c1, c2, 1));
	printf("%i \n", ft_strlcat(c1, c2, 5));
}
*/
