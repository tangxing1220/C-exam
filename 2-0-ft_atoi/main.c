/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 17:36:09 by xtang             #+#    #+#             */
/*   Updated: 2019/11/19 18:10:49 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("ft_atoi:%d\n", ft_atoi(argv[1]));
		printf("atoi   :%d\n", atoi(argv[1]));
	}
	return (0);
}
