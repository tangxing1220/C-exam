/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/22 14:36:26 by xtang             #+#    #+#             */
/*   Updated: 2019/11/27 13:00:38 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rmdoub(char *str)
{
	int	i;
	int	j;
	int	k;

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
				str[k] = '\0';
			}
			j++;
		}
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		argv[1] = ft_rmdoub(argv[1]);
		i = 0;
		while (argv[1][i] != '\0')
		{
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					write(1, &argv[1][i], 1);
					break ;
				}
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
