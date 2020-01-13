/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:24:16 by xtang             #+#    #+#             */
/*   Updated: 2020/01/13 18:38:03 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		listlen;
	t_list	*cur_ptr;

	cur_ptr = begin_list;
	listlen = 0;
	while (cur_ptr)
	{
		listlen++;
		cur_ptr = cur_ptr->next;
	}
	return (listlen);
}
