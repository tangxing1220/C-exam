/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 14:41:41 by xtang             #+#    #+#             */
/*   Updated: 2020/01/13 16:11:38 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int		ft_atoi(char *str)
{
	int i;
	int result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		result = result * 10;
		result = result + str[i] - '0';
		i++;
	}
	return (result);
}

int		ft_is_prim(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int sum;
	int value;

	sum = 0;
	if (argc == 2)
	{
		if (argv[1][0] == '-' || argv[1][0] == '0')
		{
			write(1, "0\n", 2);
			return (0);
		}
		value = ft_atoi(argv[1]);
		while (value > 1)
		{
			if (ft_is_prim(value))
				sum = sum + value;
			value--;
		}
		ft_putnbr(sum);
		write(1, "\n", 1);
		return (0);
	}
	write(1, "0\n", 2);
	return (0);
}
