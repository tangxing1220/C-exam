/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/27 15:01:12 by xtang             #+#    #+#             */
/*   Updated: 2020/01/27 16:33:19 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_wrlen(char *str, int start)
{
	int i;

	i = 0;
	while (str[start + i] != '\0')
	{
		if (str[start + i] == ' ' || str[start + i] == '\t')
			break ;
		else
			i++;		
	}
	return (i);
}

char	*ft_frwrcp(char *str, int pos, int len)
{
	char *res;
	int i;

	i = 0;
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	while (i < len)
	{
		res[i] = str[pos + i];
		   i++;	
	}
	res[i] = '\0';
	return (res);
}

void ft_putstr(char *c)
{
	int i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}

void ft_putchar (char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int i;
	char *frwr;
	int wrlen;

	if(argc > 1)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
			else
				break ;
			
		}
		if (argv[1][i] == '\0')
		{
			write(1, "\n", 1);
			return (0);
		}
		wrlen = ft_wrlen(argv[1], i);
		frwr = ft_frwrcp(argv[1], i, wrlen);
		i = i + wrlen;
		if (argv[1][i] == '\0')
		{
			ft_putstr(frwr);
			ft_putchar('\n');
			free(frwr);
			return (0);
		}
		else
		{
			while (argv[1][i] == ' ' || argv[1][i] == '\t' || argv[1][i] == '\0')
			{
				if (argv[1][i] == '\0')
					{
						ft_putstr(frwr);
						ft_putchar('\n');
						free(frwr);
						return (0);
					}
				else
					i++;				
			}		
			while(argv[1][i] != '\0')
			{	
				if (argv[1][i] == ' ' ||  argv[1][i] == '\t')
				{
					if (argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t' && argv[1][i + 1] != '\0')
						write(1, " " , 1);
				}
				else
				{
					ft_putchar(argv[1][i]);
				}
				i++;
			}
			ft_putchar(' ');
		}
		ft_putstr(frwr);
		free(frwr);
	}	
	write(1, "\n", 1);
	return (0);
}

