<<<<<<< HEAD
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    if (argc == 3)
    {
        i = 0;
        j = 0;

        if (argv[1] == NULL)
            return (write(1, "1\n", 2));
        while(argv[1][i] != '\0')
        {
            while(argv[2][j] != '\0')
            {
                if(argv[1][i] == argv[2][j])
                    {
                        i++;
                        j++;
                        break ;
                    }
                else
                    j++;
            }
            if (argv[2][j] == '\0')
                return (write(1, "0\n", 2));
        }
        if (argv[1][i] == '\0')
                return (write(1, "1\n", 2));
    }
    return(write(1, "\n", 1));

}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:34:03 by xtang             #+#    #+#             */
/*   Updated: 2020/01/14 17:38:03 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		j = 0;
		while (argv[1][i] != '\0')
		{
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					j++;
					i++;
					break ;
				}
				j++;
				if (argv[2][j] == '\0')
				{
					write(1, "0\n", 2);
					return (0);
				}
			}
			if (argv[1][i] == '\0')
			{
				write(1, "1\n", 2);
				return (0);
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}
>>>>>>> 1f62d4ce411f7879f231ddb9091894c6a1559daf
