<<<<<<< HEAD
#include <stdlib.h>
#include <unistd.h>

int *ft_rrange(int start, int end)
{
    int size;
    int *ret;
    int i;

    i = 0;
    if (start > end)
        size = start - end + 1;
    else
        size = end - start + 1;
    ret = (int *)malloc(sizeof(int) * size);
    if (ret == NULL)
        return (NULL);
    while (i < size)
    {
        if (start < end)
        {
            ret[i] = end - i; 
        }
        else
        {
            ret[i] = end + i;
        }
        i++;
    }
    return (ret);
}

int main(void)
{
    int *ptr;
    int size;

    ptr = ft_rrange(1, 3);
    size = 3;
    write(1, "{", 1);
    write(1, &*ptr, size);
    write(1, "}\n", 2);
    free(ptr);
    return (0);
}
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 17:19:54 by xtang             #+#    #+#             */
/*   Updated: 2020/01/14 17:29:43 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

unsigned int	ft_int_abs(int start, int end)
{
	unsigned int range;

	range = (start >= end) ? (start - end) : (end - start);
	return (range);
}

int				*ft_rrange(int start, int end)
{
	int				i;
	int				*ptr;
	unsigned int	range;

	i = 0;
	range = ft_int_abs(start, end);
	ptr = (int *)malloc(sizeof(int) * (range + 1));
	while (start != end)
	{
		ptr[i] = end;
		if (start >= end)
			end++;
		else
			end--;
		i++;
	}
	ptr[i] = end;
	return (ptr);
}

int				main(void)
{
	int				str;
	int				end;
	int				*ptr;
	unsigned int	i;
	unsigned int	len;

	str = 0;
	end = -3;
	len = ft_int_abs(str, end) + 1;
	ptr = ft_rrange(str, end);
	i = 0;
	while (i < len)
	{
		printf("%d, ", ptr[i]);
		i++;
	}
}
>>>>>>> 1f62d4ce411f7879f231ddb9091894c6a1559daf
