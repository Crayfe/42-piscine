/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:53:58 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/10 17:35:37 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	upper;

	i = 0;
	upper = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
			upper = 0;
		i++;
	}
	return (upper);
}
/*
int     main(){

        char *not_alpha = "147";
        char *alpha = "jfnr";
        char *medio_alpha = "984ert";
	char *upper = "UPPER";
        printf("%i\n",ft_str_is_uppercase(alpha));
        printf("%i\n",ft_str_is_uppercase(not_alpha));
        printf("%i\n",ft_str_is_uppercase(medio_alpha));
	printf("%i\n",ft_str_is_uppercase(upper));
}
*/
