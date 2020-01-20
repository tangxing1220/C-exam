<<<<<<< HEAD
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;
    int flg_str;
    int flg_word;

    i = 0;
    j = 0;
    flg_str = 0;
    flg_word = 0;
    if (argc == 1)
    {
        write(1, "\n", 1);
        return (0);
    }
    while(i < argc)
    {
        while(argv[i][j] != '\0')
        {
            if(argv[i][j] == ' ' || argv[i][j] == '\t')
            {
                if (flg_str == 0 && flg_word ==0) 
                {

                }

                
            }            
            else if(argv[i][j] >= 'a' && argv[i][j] <= 'z')
            {
                if(flg_str == 0)
                    {
                        argv[i][j] = argv[i][j] - 'a' + 'A';
                        flg_word = 1;
                    }
            }
            else if(argv[i][j] >= 'A' && argv[i][j] <= 'Z' )
            {
                if ( flg_word == 1)
                    {
                        argv[i][j] = argv[i][j] - 'A' + 'a';
                    }
                else
                {
                    flg_str = 1;
                }
            }
            else
            {
                flg_str = 1;
            }
            write(1, &argv[i][j], 1);
            j++;
        }
        write(1, "\n", 1);
        i++;
    }
    return (0);
}
=======
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
			if (argv[i][j] == ' ' || argv[i][j] == '\t')
				flag = 0;
			else if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
			{
				if (flag == 0)
					argv[i][j] = argv[i][j] - 'a' + 'A';
				flag = 1;
			}
			else if (argv[i][j] >= 'A' && argv[i][j] <= 'Z')
			{
				if (flag == 1)
					argv[i][j] = argv[i][j] - 'A' + 'a';
				flag = 1;
			}
			else
				flag = 1;
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
>>>>>>> 1f62d4ce411f7879f231ddb9091894c6a1559daf
