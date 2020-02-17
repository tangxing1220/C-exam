/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xtang <xtang@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/17 15:58:52 by xtang             #+#    #+#             */
/*   Updated: 2020/02/17 18:40:56 by xtang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int bracket_forward(char *str, int i)
{
	int count;
	int direction;
	
	count = 0;
	direction = 1;

	while (str[i] != '\0')
	{
		if (str[i] == '[')
			count++;
		else if (str[i] == ']')
			count--;
		if (str[i] == ']' && count == 0)
			return (i);
		i = i + direction;
	}
	return (0);
}

int bracket_backward(char *str, int i)
{
	int count;
	int direction;

	count = 0;
	direction = -1;

	while (str[i] != '\0')
	{
		if (str[i] == ']')
			count++;
		else if (str[i] == '[')
			count--;
		if (str[i] == '[' && count == 0)
			return (i);
		i = i + direction;
	}
	return (0);
}



int main(int argc, char **argv)
{
	int i_code;
	int i_char;
	char *ptr;

	if (argc > 1)
	{
		i_code = 0;
		i_char = 0;
		char *ptr;
		
		if(!(ptr = (char*)malloc(sizeof(char) * 2048)))
			return (-1);
		while (argv[1][i_code] != '\0')
		{

			if (argv[1][i_code] == '>')
			{
				i_char++;
			}
			else if (argv[1][i_code] == '<')
			{
				i_char--;
			}
			else if (argv[1][i_code] == '+')
			{
				ptr[i_char]++;
			}
			else if (argv[1][i_code] == '-')
			{
				ptr[i_char]--;
			}
			else if (argv[1][i_code] == '.')
			{
				write(1, &ptr[i_char], 1);
			}
			else if (argv[1][i_code] == ',')
			{
				
			}
			else if (argv[1][i_code] == '[' && (!ptr[i_char]))
			{
				i_code = bracket_forward(argv[1], i_code);
			}
			else if (argv[1][i_code] == ']' && ptr[i_char])
			{
				i_code = bracket_backward(argv[1], i_code);
			}	
			i_code++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
