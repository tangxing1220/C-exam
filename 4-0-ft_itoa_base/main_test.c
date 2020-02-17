/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/21 17:30:21 by xtang             #+#    #+#             */
/*   Updated: 2020/01/21 19:34:24 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	int base;
	int test;

	base = 10;
	test = INT_MIN;
	printf("%s\n%d\n", ft_itoa_base(test, base), test);
	test = -1;
	printf("%s\n%d\n", ft_itoa_base(test, base), test);
	test = 0;
	printf("%s\n%d\n", ft_itoa_base(test, base), test);
	test = 1;
	printf("%s\n%d\n", ft_itoa_base(test, base), test);
	test = INT_MAX;
	printf("%s\n%d\n", ft_itoa_base(test, base), test);

	base = 8;
	test = 28;
	printf("%s\n%o\n", ft_itoa_base(test, base), test);
	test = INT_MAX;
	printf("%s\n%o\n", ft_itoa_base(test, base), test);

	base = 16;
	test = 0xABCDEF9;
	printf("%s\n%x\n", ft_itoa_base(test, base), test);
	test = INT_MAX;
	printf("%s\n%x\n", ft_itoa_base(test, base), test);

	return (0);
}
