/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 12:24:05 by xtang             #+#    #+#             */
/*   Updated: 2019/12/16 13:51:53 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_bits(unsigned char octet)
{
	int i;
	int num;

	i = 0;
	num = 1;
	while (i < 8)
	{
		if (octet & 1 << (7 - i))
			write(1, "1", 1);
		else
			write(1, "0", 1);
		i++;
	}
}
