/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 17:03:14 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/17 11:02:46 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	int		find;
	char	*found;

	i = 0;
	j = 0;
	find = 0;
	while (to_find[find])
		find++;
	if (find == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			j = 0;
			while (str[i + j] == to_find[j])
				++j;
			if (find == j)
				return (str + i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	char c1[100] = "Me tomaba una estrella galicia";
	char c2[10] = "estrella";
	char c3[10] = "tomabas";
	char c4[10] = "";
	char *res = ft_strstr(c1, c2);
	printf("%s \n", res);
	res = ft_strstr(c1, c3);
	printf("%s \n", res);
	res = ft_strstr(c1, c4);
        printf("%s \n", res);

}
*/
