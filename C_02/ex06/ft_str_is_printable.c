/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:24:29 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/15 16:24:52 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	printable;

	i = 0;
	printable = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			printable = 0;
		i++;
	}
	return (printable);
}
/*
#include <stdio.h>
int     main(){

        char *not_alpha = "147";
        char *alpha = "jfnr";
	char *upper = "UPPER	úñi";
        printf("%i\n",ft_str_is_printable(alpha));
        printf("%i\n",ft_str_is_printable(not_alpha));
	printf("%i\n",ft_str_is_printable(upper));
}
*/
