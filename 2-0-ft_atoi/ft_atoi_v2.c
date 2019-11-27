/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_v2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/20 14:31:06 by xtang             #+#    #+#             */
/*   Updated: 2019/11/20 15:52:02 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int sign;
	int result;
	int count;
	int i;

	i = 0;
	sign = 1;
	result = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == '\n' || str[i] == '\f' ||\
				str[i] == ' ' || str[i] == '\v' || str[i] == '\r')
		{
			i++;
		}
		else if ((str[i] == '-' || str[i] == '+') && result == 0)
		{
			count++;
			if (count == 2)
				return (0);
			if (str[i] == '-')
				sign = -1;
			i++;
		}
		else if (str[i] >= '0' && str[i] <= '9')
		{
			result = result * 10 + str[i] - 48;
			i++;
		}
		else
		{
			if (result != 0)
				break ;
			else
				return (0);	
		}
	}
	return (result * sign);
}
