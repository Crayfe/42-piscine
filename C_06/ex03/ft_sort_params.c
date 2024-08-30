/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:35:33 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/25 12:59:36 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	equal;
	int	i;

	equal = 0;
	i = 0;
	while (s1[i] || s2[i])
	{
		if ((s1[i] < s2[i]) || (s2[i] && !s1[i]))
		{
			equal = -1;
			break ;
		}
		else if ((s1[i] > s2[i]) || (s1[i] && !s2[i]))
		{
			equal = 1;
			break ;
		}
		i++;
	}
	return (equal);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_bubble(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < argc - 2)
	{
		while (j < argc - i - 2)
		{
			if (ft_strcmp(argv[j + 1], argv[j + 2]) < 0)
			{
				tmp = argv[j + 1];
				argv[j + 1] = argv[j + 2];
				argv[j + 2] = tmp;
			}
			++j;
		}
		j = 0;
		++i;
	}
	i = 0;
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	ft_bubble(argc, argv);
	while (i < argc)
	{
		write(1, argv[i], ft_strlen(argv[i]));
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
