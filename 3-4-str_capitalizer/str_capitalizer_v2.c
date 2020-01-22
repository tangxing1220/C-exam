/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 15:29:57 by xtang             #+#    #+#             */
/*   Updated: 2019/12/18 16:08:19 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int i;
	int j;
	int flag;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}
	i = 1;
	while (i < argc)
	{
		j = 0;
		flag = 0;
		while (argv[i][j] != '\0')
		{
			if (flag == 0)
			{
				if (argv[i][j] == ' ' || argv[i][j] == '\t')
					flag = 0;
				else if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
				{
					argv[i][j] = argv[i][j] - 'a' + 'A';
					flag = 1;
				}
				else
					flag = 1;
			}
			else if (flag == 1)
			{       
				if (argv[i][j] == ' ' || argv[i][j] == '\t')
					flag = 0;
				else if(argv[i][j] >= 'A' && argv[i][j] <= 'Z')
				{
					argv[i][j] = argv[i][j] - 'A' + 'a';
					flag = 1;
				}
				else
					flag = 1;
			}
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
