/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 11:18:40 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/10 13:22:34 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	alpha;

	i = 0;
	alpha = 1;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'z')
			alpha = 0;
		else if (str[i] > 'Z' && str[i] < 'a')
			alpha = 0;
		i++;
	}
	return (alpha);
}
/*
int	main(){

	char *not_alpha = "147";
	char *alpha = "jfnr";
	char *medio_alpha = "984ert";
	char *string = "aaadasAAT";
	char *string1 = "ggssdj]]{TT";
	char *chari = "";
	printf("%i\n",ft_str_is_alpha(alpha));
	printf("%i\n",ft_str_is_alpha(not_alpha));
	printf("%i\n",ft_str_is_alpha(medio_alpha));
	printf("%i\n",ft_str_is_alpha(string));
	printf("%i\n",ft_str_is_alpha(string1));
	printf("%i\n",ft_str_is_alpha(chari));
}
*/
