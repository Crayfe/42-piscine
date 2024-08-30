/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 17:36:03 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/11 20:34:09 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	operate(int i, int *cap, char prev, char *str)
{
	if ((i == 0) || (prev < '0' || prev > 'z')
		|| (prev > '9' && prev < 'A')
		|| (prev > 'Z' && prev < 'a'))
	{
		if ((str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 32;
			*cap = 1;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			*cap = 1;
		else
			*cap = 0;
	}
	else if (*cap && str[i] >= 'A' && str[i] <= 'Z')
		str[i] = str[i] + 32;
}

char	*ft_strcapitalize(char *str)
{
	char	prev;
	int		i;
	int		cap;

	i = 0;
	cap = 0;
	while (str[i] != '\0')
	{
		operate(i, &cap, prev, str);
		prev = str[i];
		i++;
	}
	return (str);
}
/*
int 	main()
{
	char	cad1[30] = "dame veneno que quiero morir";
	char	cad2[30] = "Hola Caracola";
	char    cad3[30] = "h0la car9cola";
	printf("%s\n",ft_strcapitalize(cad1));
	printf("%s\n",ft_strcapitalize(cad2));
	printf("%s\n",ft_strcapitalize(cad3));
	printf("%s\n",ft_strcapitalize(cad5));

	//printf("%s",ft_strncpy());
}
*/
