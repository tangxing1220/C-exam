/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 18:28:38 by xtang             #+#    #+#             */
/*   Updated: 2020/01/22 19:29:47 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int sign;
	int res;
	int cur;

	i = 0;
	sign = 1;
	res = 0;
	if (str[0] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			cur = str[i] - '0';
		}
		else if (str[i] >= 'a' && str[i] <= 'f')
		{
			cur = str[i] - 'a' + 10;
		}
		else if (str[i] >= 'A' && str[i] <= 'F')
		{
			cur = str[i] - 'A' + 10;
		}
		res = res * str_base + cur;
		i++;
	}
	if (sign == -1)
		res = res * sign;
	return (res);
}
