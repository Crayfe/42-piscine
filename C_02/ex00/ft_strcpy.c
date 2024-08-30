/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:21:38 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/10 18:31:03 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = src[i];
	return (dest);
}
/*
int main (){
	char	str1[20] = "cadena";
	char	str2[20];
	//str2 = ft_strcpy(str2, str1);
	printf("%s \n", ft_strcpy(str2, str1));
return 0;
}
*/
