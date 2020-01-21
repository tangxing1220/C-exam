/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:30:21 by xtang             #+#    #+#             */
/*   Updated: 2020/01/21 19:34:24 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char *res;

	if (argc == 3)
	{
		res = ft_itoa_base(atoi(argv[1]), atoi(argv[2]));
		printf("%s", res);
	}
	return (0);
}
