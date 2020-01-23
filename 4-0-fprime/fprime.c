/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/23 11:53:57 by xtang             #+#    #+#             */
/*   Updated: 2020/01/23 11:56:55 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	unsigned int i;
	unsigned int nbr;

	if (argc == 2)
	{
		nbr = atoi(argv[1]);
		if (nbr == 1)
		{
			printf("%d\n", nbr);
			return (0);
		}
		i = 2;
		while (i <= nbr)
		{
			if (nbr % i == 0)
			{
				nbr = nbr / i;
				printf("%d", i);
				if (nbr != 1)
					printf("*");
			}
			else
				i++;
		}
	}
	printf("\n");
	return (0);
}
