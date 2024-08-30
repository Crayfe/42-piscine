/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 20:37:04 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/15 19:31:15 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (i < size)
	{
		if (src[i])
			dest[i] = src[i];
		else
		{
			dest[i] = '\0';
			break ;
		}
		i++;
	}
	return (i);
}
/*
#include <stdio.h>
int main ()
{
	char c1[10] = "array";
	char c2[10] = "";
	printf("%u\n", ft_strlcpy(c2, c1, 3));
	//printf("%lu\n", strlcpy( c2, c1, 9));
}
*/
