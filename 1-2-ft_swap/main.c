/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:09:49 by xtang             #+#    #+#             */
/*   Updated: 2019/11/19 15:17:18 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

int		main(void)
{
	int m;
	int n;

	m = 10;
	n = 20;
	ft_swap(&m, &n);
	printf("m = %d\n", m);
	printf("n = %d\n", n);
	return (0);
}
