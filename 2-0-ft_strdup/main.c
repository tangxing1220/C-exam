/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 16:24:50 by xtang             #+#    #+#             */
/*   Updated: 2019/11/21 16:39:10 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strdup(char *src);

int		main(void)
{
	int		i;
	char	*dst;
	char	*str = "ABC";

	dst = ft_strdup(str);
	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, dst, i);
	return (0);
}
