/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/27 13:10:44 by xtang             #+#    #+#             */
/*   Updated: 2019/11/27 16:02:32 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int len;
	int flag;

	len = 0;
	flag = 0;
	if (argc == 2)
	{
		while (argv[1][len] != '\0')
			len++;
		while (len > 0)
		{
			if (argv[1][len - 1] == ' ' || argv[1][len - 1] == '\t')
			{
				if (flag != 0)
					break ;
			}
			else
				flag++;
			len--;
		}
		write(1, &argv[1][len], flag);
	}
	write(1, "\n", 1);
	return (0);
}
