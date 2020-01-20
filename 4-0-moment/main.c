/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 13:43:55 by xtang             #+#    #+#             */
/*   Updated: 2020/01/20 14:59:29 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "main.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int		main(void)
{
	unsigned int	sec;
	char			*res;

	sec = 0;
	res = moment(sec);
	ft_putstr(res);
	write(1, "\n", 1);
	sec = 1;
	res = moment(sec);
	ft_putstr(res);
	write(1, "\n", 1);
	sec = 30;
	res = moment(sec);
	ft_putstr(res);
	write(1, "\n", 1);
	sec = 65;
	res = moment(sec);
	ft_putstr(res);
	write(1, "\n", 1);
	sec = 120;
	res = moment(sec);
	ft_putstr(res);
	write(1, "\n", 1);
	sec = 2400;
	res = moment(sec);
	ft_putstr(res);
	write(1, "\n", 1);
	sec = 3735;
	res = moment(sec);
	ft_putstr(res);
	write(1, "\n", 1);
	return (0);
}
