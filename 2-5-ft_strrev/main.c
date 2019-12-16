/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 16:18:30 by xtang             #+#    #+#             */
/*   Updated: 2019/12/16 16:41:49 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strlen(char *str);
char	*ft_strrev(char *str);

int		main(int argc, char **argv)
{
	int		len;
	char	*strrev;

	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		write(1, &argv[1][0], len);
		write(1, "\n", 1);
		strrev = ft_strrev(argv[1]);
		write(1, &strrev[0], len);
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}
