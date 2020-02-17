/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 16:21:19 by xtang             #+#    #+#             */
/*   Updated: 2020/01/23 17:59:26 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char **ft_split(char *str);

int	main(int argc, char **argv)
{
	int		i;
	char	**str;

	if (argc == 2)
	{
		str = ft_split(argv[1]);
		i = 0;
		while (i <= 4)
		{
			printf("%s\n", str[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
