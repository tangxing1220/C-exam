<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 17:11:06 by xtang             #+#    #+#             */
/*   Updated: 2020/01/20 17:33:56 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
=======
#include <unistd.h>

int main (int argc, char **argv)
>>>>>>> 2e5e7cf3697d0ea27f92e4075e1e6333028f92dc
{
	int i;

	i = 0;
	if (argc == 2)
	{
<<<<<<< HEAD
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (argv[1][i + 1] != ' ' &&\
						argv[1][i + 1] != '\t' &&\
						argv[1][i + 1] != '\0')
					write(1, "   ", 3);
=======
		while(argv[1][i] == ' ')
			i++;
		while(argv[1][i] != '\0')
		{
			if(argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t'|| argv[1][i + 1] == '\0')  
				{
	
				}
				else
				{
					write(1, "   ", 3);
                }
>>>>>>> 2e5e7cf3697d0ea27f92e4075e1e6333028f92dc
			}
			else
			{
				write(1, &argv[1][i], 1);
			}
			i++;
<<<<<<< HEAD
		}
=======
			
			
		}

>>>>>>> 2e5e7cf3697d0ea27f92e4075e1e6333028f92dc
	}
	write(1, "\n", 1);
	return (0);
}
<<<<<<< HEAD
=======

>>>>>>> 2e5e7cf3697d0ea27f92e4075e1e6333028f92dc
