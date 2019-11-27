/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:25:51 by xtang             #+#    #+#             */
/*   Updated: 2019/11/19 15:37:34 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	int len;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (len > 0)
		{
			write(1, &argv[1][len - 1], 1);
			len--;
		}
	}
	write(1, "\n", 1);
	return (0);
}
