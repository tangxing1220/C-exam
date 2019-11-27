/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 17:47:55 by xtang             #+#    #+#             */
/*   Updated: 2019/11/13 18:03:22 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	is_power_of_2(unsigned int n);

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s is power of  2 ? ", argv[1]);
		is_power_of_2(atoi(argv[1])) ? printf("Yes\n") : printf("No\n");
	}
	return (0);
}
