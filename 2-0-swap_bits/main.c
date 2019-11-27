/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 19:55:45 by xtang             #+#    #+#             */
/*   Updated: 2019/11/27 17:26:15 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet);

int			ft_printf_binary(unsigned int n)
{
	unsigned i;

	i = 1 << 7;
	while (i > 0)
	{
		if (n & i)
		{
			printf("1");
		}
		else
			printf("0");
		i = i / 2;
	}
	printf("\n");
	return (0);
}

int				main(void)
{
	unsigned char old;
	unsigned char new;

	old = 'b';
	new = swap_bits(old);
	printf("%c,   decimal:%d,   octal:%o,   hexadecimal:%x,   binary:",\
			old, old, old, old);
	ft_printf_binary((unsigned int)old);
	printf("%c,   decimal:%d,   octal:%o,   hexadecimal:%x,   binary:",\
			new, new, new, new);
	ft_printf_binary((unsigned int)new);
	return (0);
}
