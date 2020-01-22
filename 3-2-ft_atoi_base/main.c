/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:51:40 by xtang             #+#    #+#             */
/*   Updated: 2020/01/22 19:30:46 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_atoi_base.h"
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int base;

	if (argc == 3)
	{
		base = atoi(argv[2]);
		printf("%d   %s   %d\n", ft_atoi_base(argv[1], base), argv[1], base);
	}
	return (0);
}
