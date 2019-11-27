/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 15:42:18 by xtang             #+#    #+#             */
/*   Updated: 2019/11/19 16:05:01 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
				argv[1][i] = argv[1][i] + 1;
			else if (argv[1][i] == 'z')
				argv[1][i] = 'a';
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
				argv[1][i] = argv[1][i] + 1;
			else if (argv[1][i] == 'Z')
				argv[1][i] = 'A';
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
