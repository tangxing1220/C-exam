/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 14:56:10 by xtang             #+#    #+#             */
/*   Updated: 2020/01/23 16:19:18 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_cntwrd(char *str)
{
	int i;
	int cntwd;
	int flag;

	i = 0;
	cntwd = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (flag == 1)
				flag = 0;
		}
		else
		{
			if (flag == 0)
			{
				cntwd++;
				flag = 1;
			}
		}
		i++;
	}
	return (cntwd);
}

static char		*ft_strndup(char *s, int start, int end)
{
	char	*str;
	int		i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (end - start + 1))))
		return (NULL);
	while (i < end - start)
	{
		str[i] = s[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char			**ft_split(char *str)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	if (!(tab = (char **)malloc(sizeof(char *) * (ft_cntwrd(str) + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
		j = i;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' &&\
				str[i] != '\0')
			i++;
		if (i > j)
		{
			tab[k] = ft_strndup(str, j, i);
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}
