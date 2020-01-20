/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:43:12 by xtang             #+#    #+#             */
/*   Updated: 2020/01/20 18:31:51 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void			ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int	ft_atoi(char *str)
{
	int				i;
	unsigned int	nb;

	i = 0;
	nb = 0;
	while (str[i] != '\0')
	{
		nb = nb * 10 + (str[i] - '0');
		i++;
	}
	return (nb);
}

void			ft_putnbr(unsigned int i)
{
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		ft_putchar(i % 10 + '0');
	}
	else
		ft_putchar(i + '0');
}

int				main(int argc, char **argv)
{
	unsigned int i;
	unsigned int nb;
	unsigned int res;

	if (argc == 2)
	{
		i = 1;
		nb = ft_atoi(argv[1]);
		res = 0;
		while (i <= 9)
		{
			res = i * nb;
			ft_putnbr(i);
			write(1, " x ", 3);
			ft_putnbr(nb);
			write(1, " = ", 3);
			ft_putnbr(res);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
