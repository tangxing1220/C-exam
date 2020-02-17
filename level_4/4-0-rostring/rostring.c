/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 12:07:58 by xtang             #+#    #+#             */
/*   Updated: 2020/02/17 12:26:30 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;

	if (argc > 1)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		j = i;
		while (argv[1][i] != '\0' && argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if ((argv[1][i] != ' ' && argv[1][i] != '\t') && \
				(argv[1][i - 1] == ' ' || argv[1][i - 1] == '\t'))
			{
				while (argv[1][i] != '\0' && argv[1][i] != ' ' \
						&& argv[1][i] != '\t')
				{
					write(1, &argv[1][i], 1);
					i++;
				}
				write(1, " ", 1);
			}
			i++;
		}
		while (argv[1][j] != '\0' && argv[1][j] != ' ' && argv[1][j] != '\t')
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
