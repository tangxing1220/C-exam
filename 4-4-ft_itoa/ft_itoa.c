<<<<<<< HEAD
#include <stdlib.h>

int ft_int_len(int nbr)
{
    int len;

    len = 0;
    while(nbr != 0)
    {
        len++;
        nbr = nbr /10;
    }
    return (len);
}



char *ft_itoa(int nbr)
{
    int len;
    int sign;
    char *res;

    if (nbr == -2147483648)
    {

    } 
    sign = 1;
    if (nbr < 0)
    {
        sign = -1;
        nbr = nbr * sign;
    }
    if (sign == -1)
    {
        len = ft_int_len(nbr) + 1;
    }
    else 
    {
        len = ft_int_len(nbr);
    }
    res = (char *)malloc(sizeof(char) * (len + 1));
    if (res == NULL)
        return (NULL);

    res[len] = '\0';
    while(nbr != 0)
    {
        res[len - 1] = nbr % 10 + '0';
        len--;
        nbr = nbr / 10; 
    }
    if (sign == -1)
    {
        res[0] = '-';
    }
    return (res);
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:28:22 by xtang             #+#    #+#             */
/*   Updated: 2020/01/22 18:16:51 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_int_len(int nbr)
{
	int len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr = nbr / 10;
	}
	return (len);
}

int		ft_int_abs(int nbr)
{
	int i;

	i = nbr;
	if (nbr < 0)
		i = -1 * nbr;
	return (i);
}

char	*ft_itoa(int nbr)
{
	int		len;
	int		sign;
	char	*res;

	sign = 1;
	if (nbr < 0)
		sign = -1;
	len = ft_int_len(nbr);
	if (!(res = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	res[len] = '\0';
	if (nbr == 0)
	{
		res[0] = '0';
		return (res);
	}
	while (nbr != 0)
	{
		res[len - 1] = ft_int_abs(nbr % 10) + '0';
		len--;
		nbr = nbr / 10;
	}
	if (sign == -1)
		res[0] = '-';
	return (res);
>>>>>>> 2e5e7cf3697d0ea27f92e4075e1e6333028f92dc
}
