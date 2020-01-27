/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 11:32:49 by xtang             #+#    #+#             */
/*   Updated: 2020/01/27 12:48:55 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int		ft_wrcnt(char *str)
{
	int i;
	int cnt;

	i = 0;
	cnt = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			cnt++;
		i++;
	}
	return (cnt + 1);
}

int		ft_wrlen(char *str, int start)
{
	int wrlen;

	wrlen = 0;
	while (str[start] != '\t' && str[start] != ' ' && str[start] != '\0')
	{
		wrlen++;
		start++;
	}
	return (wrlen);
}

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

void	ft_putrarray(char **array, int arraylen)
{
	int i;

	i = arraylen - 1;
	while (i >= 0)
	{
		ft_putstr(array[i]);
		if (i != 0)
			write(1, " ", 1);
		i--;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;
	int		k;
	int		wrcnt;
	int		wrlen;
	char	**result;

	if (argc == 2)
	{
		i = 0;
		j = 0;
		wrcnt = ft_wrcnt(argv[1]);
		if (!(result = (char **)malloc(sizeof(char *) * (wrcnt + 1))))
			return (-1);
		while (i < wrcnt)
		{
			wrlen = 0;
			wrlen = ft_wrlen(argv[1], j);
			if (!(result[i] = (char *)malloc(sizeof(char) * (wrlen + 1))))
				return (-1);
			k = 0;
			while (k < wrlen)
			{
				result[i][k] = argv[1][j];
				k++;
				j++;
			}
			result[i][k] = '\0';
			j++;
			i++;
		}
		result[i] = NULL;
		ft_putrarray(result, wrcnt);
	}
	write(1, "\n", 1);
}
