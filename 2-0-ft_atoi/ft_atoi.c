/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 16:23:26 by xtang             #+#    #+#             */
/*   Updated: 2019/11/20 13:53:19 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	int sign;
	int result;
	int count;

	sign = 1;
	result = 0;
	count = 0;
	while (*str == '\t' || *str == '\n' || *str == '\f' ||\
			*str == ' ' || *str == '\v' || *str == '\r')
		str++;
	while (*str == '-' || *str == '+')
	{
		count++;
		if (count == 2)
			return (0);
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - 48;
		str++;
	}
	return (result * sign);
}
