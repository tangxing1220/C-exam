/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:43:35 by xtang             #+#    #+#             */
/*   Updated: 2020/01/14 17:47:17 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ismod(unsigned int a, unsigned int b)
{
	int result;

	result = (a % b == 0) ? 1 : 0;
	return (result);
}

int	main(int argc, char **argv)
{
	unsigned int	int1;
	unsigned int	int2;
	int				i;
	int				res;
	int				loop;

	res = 0;
	if (argc == 3)
	{
		int1 = atoi(argv[1]);
		int2 = atoi(argv[2]);
		loop = (int1 >= int2) ? int2 : int1;
		i = 1;
		while (i <= loop)
		{
			if (ft_ismod(int1, i) && ft_ismod(int2, i))
			{
				res = i;
			}
			i++;
		}
		printf("%d", res);
	}
	printf("\n");
	return (0);
}
