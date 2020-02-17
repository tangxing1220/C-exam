<<<<<<< HEAD
#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct s_list
{
    struct s_list *next;
    void *data;
}               t_list;

int ft_list_size(t_list *begin_list);

#endif
=======
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/13 18:26:31 by xtang             #+#    #+#             */
/*   Updated: 2020/01/13 18:39:17 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

#endif
>>>>>>> 1f62d4ce411f7879f231ddb9091894c6a1559daf
