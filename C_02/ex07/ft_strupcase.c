/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 16:58:11 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/10 17:51:07 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*
int main()
{
	char	c1[8] = "mariano";
	char    c2[8] = "mPaUano";
	char    c3[7] = "URANUS";
	printf("%s\n",ft_strupcase(c1));
	printf("%s\n",ft_strupcase(c2));
	printf("%s\n",ft_strupcase(c3));


}
*/
