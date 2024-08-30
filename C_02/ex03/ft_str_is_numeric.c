/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:55:07 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/10 17:21:12 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	numeric;

	i = 0;
	numeric = 1;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			numeric = 0;
		i++;
	}
	return (numeric);
}
/*
int     main(){

        char *not_alpha = "147";
        char *alpha = "jfnr";
        char *medio_alpha = "";
        printf("%i\n",ft_str_is_numeric(alpha));
        printf("%i\n",ft_str_is_numeric(not_alpha));
        printf("%i\n",ft_str_is_numeric(medio_alpha));
}
*/
