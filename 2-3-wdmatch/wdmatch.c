/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:40:22 by xtang             #+#    #+#             */
/*   Updated: 2019/12/16 11:23:49 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int			main(int argc, char **argv)
{
	int i;
	int j;
	int flag;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		flag = 0;
		while (argv[1][i] != '\0')
		{
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					flag++;
					j++;
					break ;
				}
				j++;
			}
			i++;
		}
		if (flag == ft_strlen(argv[1]))
			write(1, &argv[1][0], flag);
	}
	write(1, "\n", 1);
	return (0);
}
