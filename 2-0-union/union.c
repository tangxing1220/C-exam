/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 19:18:56 by xtang             #+#    #+#             */
/*   Updated: 2019/11/27 20:12:51 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static char	*ft_rmdoub(char *str)
{
	int i;
	int j;
	int k;

	i = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[j])
			{
				k = j;
				while (str[k] != '\0')
				{
					str[k] = str[k + 1];
					k++;
				}
			}
			j++;
		}
		i++;
	}
	return (str);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while(str[i] != '\0')
		i++;
	return (i);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int flag;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		argv[1] = ft_rmdoub(argv[1]);
		argv[2] = ft_rmdoub(argv[2]);
		write(1, &argv[1][0], ft_strlen(argv[1]));
		
		i = 0;
		while (argv[2][i] != '\0')
		{
			j = 0;
			flag = 0;
			while (argv[1][j] != '\0')
			{
				if (argv[2][i] == argv[1][j])
				{
					flag = 1;
					break ;
				}
				j++;
			}
			if (flag != 1)
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
