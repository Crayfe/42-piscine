/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 10:37:41 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/10 17:02:59 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	int				src_end;

	i = 0;
	src_end = 0;
	while (i < n)
	{
		if (src_end)
			dest[i] = '\0';
		else
		{
			if (src[i] != '\0')
				dest[i] = src[i];
			else
			{
				src_end = 1;
				dest[i] = '\0';
			}
		}
		i++;
	}
	return (dest);
}
/*
int 	main()
{
	char	cad1[5] = "ford";
	char	cad2[10] = "";
	printf("%s",ft_strncpy(cad2, cad1, 9));
	//printf("%s",ft_strncpy());
}
*/
