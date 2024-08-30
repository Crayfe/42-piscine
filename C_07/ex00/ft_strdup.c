/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:22:16 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/25 11:40:20 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = src[i];
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*new_str;

	new_str = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	new_str = ft_strcpy(new_str, src);
	return (new_str);
}
/*
#include <stdio.h>
int	main()
{
	char *str;
	str = ft_strdup("cadena");
	printf("%s \n", str);
	free(str);
	return (0);
}
*/
