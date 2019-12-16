/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 15:25:35 by xtang             #+#    #+#             */
/*   Updated: 2019/12/16 15:52:42 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s);

int	main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = ft_strcmp(argv[1], argv[2]);
		printf("ft_strcmp():%d\n", result);
		result = strcmp(argv[1], argv[2]);
		printf("strcmp():%d\n", result);
	}
	write(1, "\n", 1);
	return (0);
}
