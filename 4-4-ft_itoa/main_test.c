/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/22 16:47:59 by xtang             #+#    #+#             */
/*   Updated: 2020/01/22 18:04:58 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	int test;

	test = INT_MIN;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = -1;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = 0;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = 1;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = INT_MAX;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = 28;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = 9;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = -9;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = 10;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = -10;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = 8124;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = -9874;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = 543000;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = -2147483648LL;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = -2147483648;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	test = 2147483647;
	printf("%s\n%d\n\n", ft_itoa(test), test);
	return (0);
}
