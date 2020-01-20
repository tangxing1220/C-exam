/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:51:13 by xtang             #+#    #+#             */
/*   Updated: 2020/01/14 17:55:20 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

unsigned int	ft_atoi(char *str)
{
	int				i;
	unsigned int	res;

	i = 0;
	res = 0;
	while (str[i] != '\0')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);
}

void			ft_putchr(char c)
{
	write(1, &c, 1);
}

void			ft_puthex(unsigned int num)
{
	if (num > 15)
	{
		ft_puthex(num / 16);
		ft_puthex(num % 16);
	}
	else
	{
		if (num == 10)
			ft_putchr('a');
		else if (num == 11)
			ft_putchr('b');
		else if (num == 12)
			ft_putchr('c');
		else if (num == 13)
			ft_putchr('d');
		else if (num == 14)
			ft_putchr('e');
		else if (num == 15)
			ft_putchr('f');
		else
			ft_putchr('0' + num);
	}
}

int				main(int argc, char **argv)
{
	unsigned int num;

	if (argc == 2)
	{
		num = ft_atoi(argv[1]);
		ft_puthex(num);
	}
	write(1, "\n", 1);
	return (0);
}
