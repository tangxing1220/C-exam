/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/21 14:48:22 by xtang             #+#    #+#             */
/*   Updated: 2019/11/21 15:00:45 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject);

int		main(int argc, char **argv)
{
	if (argc == 3)
	{
		printf("strcspn   : %lu\n", strcspn(argv[1], argv[2]));
		printf("ft_strcspn: %lu\n", ft_strcspn(argv[1], argv[2]));
	}
	return (0);
}
