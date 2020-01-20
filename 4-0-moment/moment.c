/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moment.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/20 11:36:51 by xtang             #+#    #+#             */
/*   Updated: 2020/01/20 16:17:21 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static void		lengths(unsigned int n, unsigned int *len, unsigned int *weight)
{
	*len = 0;
	*weight = 1;
	while ((n / *weight) > 9)
	{
		*weight = *weight * 10;
		*len = *len + 1;
	}
}

char			*ft_itoa(unsigned int nb)
{
	unsigned int	len;
	unsigned int	weight;
	unsigned int	cur;
	char			*str;

	lengths(nb, &len, &weight);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	cur = 0;
	while (weight >= 1)
	{
		str[cur] = ((nb / weight) % 10) + '0';
		weight = weight / 10;
		cur++;
	}
	str[cur] = '\0';
	return (str);
}

int				ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char			*ft_strjoin(char *s1, char *s2)
{
	char	*cur;
	int		i;
	int		j;

	i = 0;
	j = 0;
	cur = (char *)malloc(sizeof(char) * (ft_strlen(s1) + (ft_strlen(s2) + 1)));
	if (cur == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		cur[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		cur[i + j] = s2[j];
		j++;
	}
	cur[i + j] = '\0';
	return (cur);
}

char			*moment(unsigned int duration)
{
	unsigned int	sec;
	unsigned int	min;
	unsigned int	hour;
	unsigned int	day;
	unsigned int	month;
	char			*result;


	sec = duration;
	min = 0;
	hour = 0;
	day = 0;
	month = 0;
	if (sec != 0)
	{
		min = sec / 60;
		sec = sec % 60;
	}
	if (min != 0)
	{
		hour = min / 60;
		min = min % 60;
	}
	if (hour != 0)
	{
		day = hour / 24;
		hour = hour % 24;
	}
	if ( day != 0)
	{
		month = day / 30;
		day = day % 30;
	}
	if (month != 0)
	{
		if (month == 1)
		{
			if (!(result = (char *)malloc(sizeof(char) * (12 + 1))))
				return (NULL);
			result = "1 month ago.";
		}
		else
		{
			result = ft_strjoin(ft_itoa(month), " months ago.");
		}
		return (result);
	}
	else if (day != 0)
	{
		if (day == 1)
		{
			if (!(result = (char *)malloc(sizeof(char) * (10 + 1))))
				return (NULL);
			result = "1 day ago.";
		}
		else
		{
			result = ft_strjoin(ft_itoa(day), " days ago.");
		}
		return (result);
	}
	else if (hour != 0)
	{
		if (hour == 1)
		{
			if (!(result = (char *)malloc(sizeof(char) * (11 + 1))))
				return (NULL);
			result = "1 hour ago.";
		}
		else
		{
			result = ft_strjoin(ft_itoa(hour), " hours ago.");
		}
		return (result);
	}
	else if (min != 0)
	{
		if (min == 1)
		{
			if (!(result = (char *)malloc(sizeof(char) * (13 + 1))))
				return (NULL);
			result = "1 minute ago.";
		}
		else
		{
			result = ft_strjoin(ft_itoa(min), " minutes ago.");
		}
		return (result);
	}
	else
	{
		if (sec == 1)
		{
			if (!(result = (char *)malloc(sizeof(char) * (14 + 1))))
				return (NULL);
			result = "1 second ago.";
		}
		else
		{
			result = ft_strjoin(ft_itoa(sec), " seconds ago.");
		}
	}
	return (result);
}
