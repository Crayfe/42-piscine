/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 16:58:30 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/16 12:51:56 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	dest_end;

	dest_end = 0;
	i = 0;
	while (dest[dest_end])
		dest_end++;
	while (src[i])
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
	char    c3[15] = "";
	char	c2[10] = "plus";
	printf("%s \n", ft_strcat(c1, c2));
	printf("%s \n", ft_strcat(c3, c2));
}
*
*/
