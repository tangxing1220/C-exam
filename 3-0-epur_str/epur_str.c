<<<<<<< HEAD
#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int flag;

    if (argc == 2)
    {
        flag = 0;
        i= 0;
        while (argv[1][i] != '\0')
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
                i++;
            else
                break ;
        }
        while(argv[1][i] != '\0')
        {
            if ( argv[1][i] == ' ' || argv[1][i] == '\t')
                flag++;
            else
            {
                if (flag != 0)
                    {
                        write(1, " ", 1);
                        flag = 0;
                    }
                write(1, &argv[1][i],1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 16:33:07 by xtang             #+#    #+#             */
/*   Updated: 2020/01/13 17:29:35 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

int	main(int argc, char **argv)
{
	int i;
	int flag;
	int len;

	flag = 0;
	i = 0;
	if (argc == 2)
	{
		len = ft_strlen(argv[1]);
		while (argv[1][len] == ' ' || argv[1][len] == '\t')
			len--;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		while (i < len - 1)
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
				if (flag == 0)
				{
					write(1, " ", 1);
					flag = 1;
				}
			}
			else
			{
				write(1, &argv[1][i], 1);
				flag = 0;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
>>>>>>> 1f62d4ce411f7879f231ddb9091894c6a1559daf
