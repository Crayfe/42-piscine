/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cayuso-f <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:01:38 by cayuso-f          #+#    #+#             */
/*   Updated: 2024/07/15 18:43:37 by cayuso-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	aux_putchar(char c, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		write(1, &c, 1);
		i++;
	}
}

void	aux_print_hex(unsigned long long addr, int prev)
{
	char	*hexa_base;

	hexa_base = "0123456789abcdef";
	if (addr < 16 && prev == 1)
		aux_putchar(hexa_base[0], 1);
	else if (addr >= 16)
	{
		aux_print_hex(addr / 16, 0);
		aux_print_hex(addr % 16, 0);
	}
	else
		aux_putchar(hexa_base[addr], 1);
}

void	aux_print_addr(unsigned long long addr)
{
	unsigned long long	tmp;
	int					i;

	i = 0;
	tmp = addr;
	while (i < 16)
	{
		if (tmp < 16)
			aux_putchar('0', 1);
		tmp = tmp / 16;
		i++;
	}
	aux_print_hex(addr, 0);
}

void	aux_print_memo(unsigned char *c, int size)
{
	int	i;

	i = -1;
	while (i++ < 16)
	{
		if (i % 2 == 0)
			aux_putchar(' ', 1);
		if (i < size)
			aux_print_hex((unsigned long long)*(c + i), 1);
		else if (i != 16)
			aux_putchar(' ', 2);
	}
	i = -1;
	while (i++ < size -1)
	{
		if (*(c + i) < 32 || *(c + i) > 126)
			aux_putchar(':', 1);
		else
			aux_putchar(*(c + i), 1);
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	unsigned char	*mem_addr;
	int				hex_size;

	i = 0;
	mem_addr = addr;
	while (i * 16 < size)
	{
		if (i < size / 16)
			hex_size = 16;
		else
			hex_size = size % 16;
		aux_print_addr((unsigned long long)mem_addr + (16 * i));
		aux_putchar(':', 1);
		aux_print_memo(mem_addr + (i * 16), hex_size);
		aux_putchar('\n', 1);
		i++;
	}
	return (addr);
}
/*
int	main()
{
	char str[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit.
	 Aenean egestas, nulla eget suscipit imperdiet, ante ante convallis nisl, 
	 a pretium ligula enim quis enim. Aliquam auctor mattis nunc vitae finibus. 
	 Nullam eu sem sit amet ante venenatis semper at quis augue. Etiam eleifend 
	 ultricies ex, ac ullamcorper purus faucibus at. Nullam fermentum hendrerit 
	 nunc a gravida. Sed id neque quis lorem vestibulum aliquet. Mauris varius 
	 diam ac augue finibus imperdiet. Sed blandit mauris vitae felis cursus 
	 tincidunt. Cras blandit tincidunt eros sed imperdiet. Etiam dapibus 
	 lectus eros, sit amet placerat ante fringilla et. Sed ligula mi, 
	 iaculis ut imperdiet non, cursus semper tortor. Pellentesque habitant 
	 morbi tristique senectus et netus et malesuada fames ac turpis egestas.
	  Nulla vitae auctor elit.";
	ft_print_memory(str, 200);
}
*/
