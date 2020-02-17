/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:27:43 by xtang             #+#    #+#             */
/*   Updated: 2020/01/21 19:39:38 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
<<<<<<< HEAD
=======
#include <limits.h>
>>>>>>> 2e5e7cf3697d0ea27f92e4075e1e6333028f92dc

int		ft_int_digi(int value, int base)
{
	int i;

	i = 0;
	while (value > 0)
	{
		value = value / base;
		i++;
	}
	return (i);
}

<<<<<<< HEAD
=======
char	*ft_strdup(char *str)
{
	int i;
	int len;
	char *res;

	i = 0;
	len = 0;
	while(str[len] != '\0')
		len++;
	res = (char *)malloc(sizeof(char) * len);
	if (res == NULL)
		return (NULL);
	while(str[i] != '\0') 
	{
		res[i] = str[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}

>>>>>>> 2e5e7cf3697d0ea27f92e4075e1e6333028f92dc
char	*ft_itoa_base(int value, int base)
{
	int		sign;
	int		digits;
	char	*result;

	if (value == 0)
<<<<<<< HEAD
	{
		result = (char *)malloc(sizeof(char) * 2);
		if (result == NULL)
			return ("Error");
		result[0] = '0';
		result[1] = '\0';
		return (result);
	}
=======
		return (ft_strdup("0"));
	if (value == INT_MIN && base == 10)
		return (ft_strdup("-2147483648"));
>>>>>>> 2e5e7cf3697d0ea27f92e4075e1e6333028f92dc
	sign = 1;
	if (value < 0 && base == 10)
	{
		sign = -1;
		value = value * sign;
	}
	if (sign == -1 && base == 10)
		digits = ft_int_digi(value, base) + 1;
	else
		digits = ft_int_digi(value, base);
	result = (char *)malloc(sizeof(char) * (digits + 1));
	if (result == NULL)
		return ("Error");
	result[digits] = '\0';
	while (value > 0)
	{
		digits = digits - 1;
		if (value % base < 10)
		{
			result[digits] = value % base + '0';
		}
		else
		{
			result[digits] = value % base - 10 + 'A';
		}
		value = value / base;
	}
	if (sign == -1 && base == 10)
		result[0] = '-';
	return (result);
}
