/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/07 13:57:47 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/08 16:44:08 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp1;
	int	tmp2;
	int	i;

	i = 0;
	while (i <= size / 2)
	{
		tmp1 = *(tab + i);
		if (size % 2 == 0)
			tmp2 = *(tab + size - i - 1);
		else
			tmp1 = *(tab + size - i);
		*(tab + i) = tmp2;
		if (size % 2 == 0)
			*(tab + size - i - 1) = tmp1;
		else
			*(tab + size - i) = tmp1;
		i++;
	}
}
