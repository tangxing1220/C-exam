/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 11:29:47 by xtang             #+#    #+#             */
/*   Updated: 2019/12/16 12:19:29 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int argc, char **argv)
{
	int		num1;
	int		num2;
	int		result;
	char	operator;

	if (argc == 4)
	{
		operator = argv[2][0];
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		if (operator == '+')
			result = num1 + num2;
		else if (operator == '-')
			result = num1 - num2;
		else if (operator == '*')
			result = num1 * num2;
		else if (operator == '/')
			result = num1 / num2;
		else
			result = num1 % num2;
		printf("%d\n", result);
	}
	else
		write(1, "\n", 1);
	return (0);
}
