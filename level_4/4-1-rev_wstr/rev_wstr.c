/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:53:08 by xtang             #+#    #+#             */
/*   Updated: 2020/02/17 13:48:43 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int		ft_strcnt(char *str)
{
	int i;
	int cnt;
	int flag;

	i = 0;
	cnt = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ' && str[i] != '\t')
		{
			if (flag == 0)
			{
				cnt++;
				flag = 1;
			}
		}
		else
		{
			flag = 0;
		}
		i++;
	}
	return (cnt);
}

char	**ft_wordsplit(char *str, int size)
{
	int		i;
	int		j;
	int		k;
	int		m;
	char	**res;

	i = 0;
	k = 0;
	if (!(res = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	while (k < size)
	{
		j = 0;
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		{
			i++;
			j++;
		}
		if (!(res[k] = (char *)malloc(sizeof(char) * (j + 1))))
			return (NULL);
		m = 0;
		while (m < j)
		{
			res[k][m] = str[i - j + m];
			m++;
		}
		res[k][m] = '\0';
		k++;
		i++;
	}
	res[i] = NULL;
	return (res);
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

int		main(int argc, char **argv)
{
	int		len;
	char	**strarr;

	if (argc > 1)
	{
		len = ft_strcnt(argv[1]);
		strarr = ft_wordsplit(argv[1], len);
		while (len > 0)
		{
			ft_putstr(strarr[len - 1]);
			if (len - 1 > 0)
				write(1, " ", 1);
			len--;
		}
	}
	write(1, "\n", 1);
	return (1);
}
