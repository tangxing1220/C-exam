/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/19 14:51:18 by xtang             #+#    #+#             */
/*   Updated: 2019/11/19 14:56:31 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

int		main(void)
{
	char *str;
	char s[] = "This is Hive. ";

	str = s;
	ft_putstr(str);
	return (0);
}