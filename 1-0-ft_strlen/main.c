/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/18 16:38:30 by xtang             #+#    #+#             */
/*   Updated: 2019/11/18 16:48:57 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char *str = "HIVE Helsinki";

	write(1, str, ft_strlen(str));
	printf("\nstring length is %d.", ft_strlen(str));
	return (0);
}
