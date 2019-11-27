/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 15:35:54 by xtang             #+#    #+#             */
/*   Updated: 2019/11/18 15:50:11 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strcpy(char *s1, char *s2);

int	main(int argc, char **argv)
{
	char *dst;

	if (argc == 3)
	{
		dst = ft_strcpy(argv[1], argv[2]);
	}
	ft_putstr(dst);
	return (0);
}
