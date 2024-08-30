/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:53:58 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/10 17:31:24 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	lower;

	i = 0;
	lower = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
			lower = 0;
		i++;
	}
	return (lower);
}
/*
int     main(){

        char *not_alpha = "147";
        char *alpha = "jfnr";
        char *medio_alpha = "984ert";
	char *upper = "UPPER";
        printf("%i\n",ft_str_is_lowercase(alpha));
        printf("%i\n",ft_str_is_lowercase(not_alpha));
        printf("%i\n",ft_str_is_lowercase(medio_alpha));
	printf("%i\n",ft_str_is_lowercase(upper));
}
*/
