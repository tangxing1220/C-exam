/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zaz <zaz@staff.42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/27 13:14:10 by zaz               #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2014/02/27 13:15:29 by zaz              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};
=======
/*   Updated: 2020/01/27 13:47:17 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list	t_list;

struct	s_list
{
	int		data;
	t_list	*next;
};

#endif
>>>>>>> 2e5e7cf3697d0ea27f92e4075e1e6333028f92dc
