/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/28 13:07:09 by xtang             #+#    #+#             */
/*   Updated: 2019/12/16 11:07:37 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	max(int *tab, unsigned int len);

int			main(void)
{
	int	array[10] = {9999, 34, -21, 0, 0, 24, 34, 65, -90, 10};
	int	i;
	int	result;

	i = 0;
	result = max(array, 10);
	printf("%d\n", result);
	return (0);
}